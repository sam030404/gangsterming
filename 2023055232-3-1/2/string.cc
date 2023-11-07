#include <iostream>
#include <string>


int main() {
    std::string input;
    std::cin >> input;
    std::string input2;
    std::cin >> input2;

    std:: string newstring;
    newstring=input+input2;
    std::cout << newstring <<std::endl;

    std::cout << input.front()<< std::endl;
    std::cout << input2.back()<< std::endl;


    return 0;
}
