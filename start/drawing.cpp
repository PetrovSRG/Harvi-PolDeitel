#include <iostream>

int main()
{
    int r = 1, c = 2, a = 3, rh = 4, n;

    std::cout << "Hello! \n Choose which picture you want to see and indicate the number: \n" << 
    " 1 - rectangle; \n 2 - cirle; \n 3 - arrow; \n 4 - rhombus. \n\n";
    std::cin >> n;

    // если выбрали 1 выводим прямоугольник
    if ( n == r)
    {
        std::cout << "\n**********\n" << "*        *\n" << "*        *\n" << "*        *\n"
        << "*        *\n" << "*        *\n" << "*        *\n" << "*        *\n" << "**********\n";
    }

    // если выбрали 2 выводим овал/круг
    if ( n == c )
    {
        std::cout << "\n  ****  \n" << " *    * \n" << "*      *\n" << "*      *\n" << "*      *\n" << "*      *\n"
        << " *    * \n" << "  ****  \n";
    }

    // если выбрали 3 выводим стрелу
    if ( n == a )
    {
        std::cout << "\n   *   \n" << "  ***  \n" << " ***** \n" << "   *   \n" << "   *   \n" << "   *   \n" 
        << "   *   \n" << "   *   \n" << "   *   \n" << "   *   \n";
    }

    // если выбрали 4 выводим ромб
    if ( n == rh )
    {
        std::cout << "\n     *      \n" << "    * *    \n" << "   *   *   \n" << "  *     *  \n" << " *       * \n"
        << "*         *\n" << " *       * \n" << "  *     *  \n" << "   *   *   \n" << "    * *    \n" "     *      \n";
    }
    
}