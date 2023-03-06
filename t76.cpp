#include <iostream>
#include <string>
 
int main()
{
    std::string str = "C++20";
    char c = '+';
 
    if (str.contains(c)) {
        std::cout << "Character found" << std::endl;
    } else {
        std::cout << "Character not found" << std::endl;
    }
 
    return 0;
}