#include "Span.hpp"
#include <iostream>
Span::Span( unsigned int n):N(n){}

Span::~Span(){
}

void Span::addNumber(int n){
    if(integers.size() >= N)
        throw std::out_of_range("baaad trip");
    else 
        integers.push_back(n);
}

void Span::addNumber(std::vector<int>::iterator  begin ,std::vector<int>::iterator end){
    if(std::distance(begin ,end) > N)
        throw std::out_of_range("baaad trippp !");
    else
        for(std::vector<int>::iterator it = begin ; it != end ; it++)
            addNumber(*it);
}


unsigned int Span::shortestSpan(void){
    if(integers.size() <= 1)
        throw std::out_of_range("bad trip");
    std::vector<int> tmp = integers;
    std::sort(tmp.begin(),tmp.end());
    unsigned int  shortest_span = *(tmp.begin() + 1) - *tmp.begin();
    for(std::vector<int>::iterator it = tmp.begin(); it != tmp.end();it++)
    {
            unsigned int cur_span = (*(it + 1) - *it);
            if(it + 1 != tmp.end() &&  cur_span < shortest_span && cur_span != 0)
                shortest_span = cur_span;
    }
    return shortest_span;
}

unsigned int Span::longestSpan(void){
    if(integers.size() <= 1)
        throw std::out_of_range("bad trip");
    return (*std::max_element(integers.begin(),integers.end()) - *std::min_element(integers.begin(),integers.end()));
}

std::vector<int>::iterator Span::begin(void){return integers.begin();}
std::vector<int>::iterator Span::end(void){return integers.end();}
