//main.cpp
//Alex Boulanger

//This project implements a bubble sort done with variadic templates
//Inspire by Stephan T Lavavej in the core c++ 8 video on channel9
//http://channel9.msdn.com/Series/C9-Lectures-Stephan-T-Lavavej-Core-C-/Stephan-T-Lavavej-Core-Cpp-8-of-n

//

#include <iostream>
#include <typeinfo>

template<int ...Vals>
struct Ints
{
};

template <typename Ints1, typename Ints2>
struct Concat;

template<int... Vals1, int... Vals2>
struct Concat<Ints<Vals1...>, Ints<Vals2...>>
{
    typedef Ints<Vals1..., Vals2...> type;
};

// The Reverse is use to get the last element first
// to counter the limitation of the variadic template of only
// "unpack" the first elements in a variadic pack
template <typename Ints1>
struct Reverse;

template<int Val, int... ValsRest>
struct Reverse<Ints<Val, ValsRest...>>
{
    typedef typename Concat<typename Reverse<Ints<ValsRest...>>::type, Ints<Val>>::type type;
};

template<int Vals1>
struct Reverse<Ints<Vals1>>
{
    typedef Ints<Vals1> type;
};


// -----------------------------------------
// find order in 2 values

template<bool A_IsSmaller, int, int>
struct SeparatedValues;

template<int A, int B>
struct SeparatedValues<true, A, B>
{
    enum
    {
        SMALEST = A,
        BIGGEST = B
    };
};

template<int A, int B>
struct SeparatedValues<false, A, B>
{
    enum
    {
        SMALEST = B,
        BIGGEST = A
    };
};

template<int A, int B>
struct OrderedValue
{
    typedef SeparatedValues<(A<B), A, B> OrderedValues;

    enum
    {
        SMALEST = OrderedValues::SMALEST,
        BIGGEST = OrderedValues::BIGGEST
    };
};

// -----------------------------------------

template <typename T>
struct SortElements;

template <int A, int B, int ...T>
struct SortElements<Ints<A, B, T...>>
{
    typedef SeparatedValues<(A<B), A, B> OrderedValues;
    typedef SortElements<Ints<OrderedValues::BIGGEST, T...>> Rest;

    enum
    {
        SMALEST = OrderedValues::SMALEST,
    };

    typedef typename Concat<Ints<SMALEST>, typename Rest::type>::type type;
};

template <int A>
struct SortElements<Ints<A>>
{
    typedef Ints<A> type;
};


template <typename Ints>
struct SortedList;

template <int A, int... Vals>
struct SortedList<Ints<A, Vals...>>
{
    // since the variadic templates can only seperate the first element(s) of a pack,
    // hence the reverse to remove the last element.
    // Also, the bubble sort will have a complexity of O(n^2) if all element are already in order
    typedef typename Reverse<typename SortElements<Ints<Vals...>>::type>::type SortedRest;
    typedef typename Concat<Ints<A>, typename SortedList<SortedRest>::type>::type type;
};

template <int Val>
struct SortedList<Ints<Val>>
{
    typedef Ints<Val> type;
};

template <int ...T>
struct Sort
{
    typedef typename Reverse<typename SortElements<Ints<T...>>::type>::type biggestElementFirst;
    typedef typename Reverse<typename SortedList<biggestElementFirst>::type>::type type;
};


int main()
{
    std::cout << typeid(Sort<33, 11, 44, 18, 35, 1, 22, 99, 34, 23, 12, 34, 44, 44, 12, 34, 65, 54, 65>::type).name() << std::endl;
}
