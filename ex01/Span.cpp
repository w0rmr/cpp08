#include "Span.hpp"
#include <iostream>
Span::Span( unsigned int n):N(n){}

Span::~Span(){}

void Span::addNumber(int n){
    std::cout << N << std::endl;
    if(integers.size() >= N){
        std::cout << "bad trip !" << std::endl;
        throw std::out_of_range("baaad trip");
        }
    else {
        std::cout << "push" << std::endl;
        integers.push_back(n);
        
        }
}
