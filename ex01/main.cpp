#include "Span.hpp"
#include <iostream>
int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << "testsss" << std::endl;
    sp.addNumber(333);
    std::cout << "test" << std::endl;

    sp.addNumber(3332);
    sp.addNumber(33322);
    std::cout << "test" << std::endl;

    // std::cout << sp.shortestSpan() << std::endl;
    // std::cout << sp.longestSpan() << std::endl;
    return 0;
}