#pragma once
#include <stdexcept>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <fstream>
class Span{
    private: 
        unsigned int N;
        std::vector<int> integers;
    public:
        Span(unsigned int n);
        ~Span();
        void addNumber(int n);
        void addNumber(std::vector<int>::iterator begin ,std::vector<int>::iterator end);
        unsigned int shortestSpan(void);
        unsigned int longestSpan(void);
        std::vector<int>::iterator begin(void);
        std::vector<int>::iterator end(void);
};

