
#include <iostream>
int main()
{

    int num1, num2;

    std::cout << "Choose your first variable: ";

    std::cin >> num1;

    std::cout << "Choose your second varible: ";

    std::cin >> num2;

    int sum = num1 + num2;

    std::cout <<"The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;
    return 0;

}