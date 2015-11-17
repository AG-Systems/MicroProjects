#include <algorithm>
#include <vector>

std::vector <int> numbers;
struct greater
{
    template<class T>
    bool operator()(T const &a, T const &b) const { return a > b; }
};
int main()
{
  std::sort(numbers.begin(), numbers.end(), greater());
}
