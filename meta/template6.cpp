#include <iostream>

// handles the other types
template <typename T>
void print(const T &t) {
  std::cout << t;
}

// alias a few things to make the prototypes readable
typedef std::basic_ostream<char, std::char_traits<char> > CoutType;
typedef CoutType& (*StandardEndLine)(CoutType&);

int main() {
  print("hello\n"); // works
  print(4); // works
  print((StandardEndLine)std::endl); // <- NOTE: there is an explicit cast
  return 0;
}
