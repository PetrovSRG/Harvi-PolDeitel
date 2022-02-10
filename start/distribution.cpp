#include <iostream>

int main()
{

    int a, b, c, sum, average, product, smaller, bigger;

    std::cout << "Please enter three number: " << std::endl;
    std::cin >> a >> b >> c;

    // находим сумму
    sum = a + b + c;
    std::cout << "the sum is " << sum << std::endl;

    // находим среднее число
    average = sum / 2;
    std::cout << "the average number " << average << std::endl;

    // находим прозведение умножения
    product = a * b * c;
    std::cout << "The product " << product << std::endl;

    // находим меньшее число
    if ( a < b && a < c)
    {
        std::cout << "Smaller number " << a << std::endl;
    }
    else if ( b < c)
    {
        std::cout << "Smaller number " << b << std::endl;
    }
    else std::cout << "Smaller number " << c << std::endl; 

    // находим большее число
    if ( a > b && a > c)
    {
        std::cout << "Bigger number " << a << std::endl;
    }
    else if ( b > c)
    {
        std::cout << "Bigger number " << b << std::endl; 
    }
    else std::cout << "Bigger number " << c << std::endl;

    return 0;
}