#include <iostream>
#include <string>


int add(int a, int b) {
    return a + b;
}

std::string addstring(std::string a, std::string b) {
    return a + "-" + b;
}

int main() {
    int num1, num2;
    std::string str1, str2;

    std::cin >> num1 >> num2 >> str1 >> str2;

    int sum = add(num1, num2);
    std::string combinedString = addstring(str1, str2);

    std::cout << sum << std::endl;
    std::cout << combinedString << std::endl;

    return 0;
}

