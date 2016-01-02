#include <iostream>
#include <string>

int main() {
   // Complete the program
    std::string a = "abcd";
    std::string b = "ef";
    std::cout << a.size() << " " << b.size() << std::endl;
    std::string c = a + b;
    std::cout << c << std::endl;
    char c0 = b[0];
    char c1 = a[1];
    char c2 = a[2];
    char c3 = a[3];
    char c4 = a[0];
    char c5 = b[1];
    std::cout << c0 << c1 << c2 << c3 << " " << c4 << c5 << std::endl;
    return 0;
}
