#pragma once
#include <stdexcept>
#include <vector>
class Span{
    private: 
        unsigned int N;
        std::vector<int> integers;
    public:
        Span(unsigned int n);
        ~Span();
        void addNumber(int n);
};

