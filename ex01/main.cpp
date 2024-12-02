#include "Span.hpp"
int plus(){
    int r_nbr;
    std::ifstream urandom("/dev/urandom", 8U | 4U);
    urandom.read(reinterpret_cast<char*>(&r_nbr), sizeof(r_nbr));
    srand(r_nbr);
    return rand() / 4;
}

int main()
{
    Span sp = Span(4294);
    std::vector<int> trip(4294);
    std::generate(trip.begin(),trip.end(),plus);
    try{
        sp.addNumber(trip.begin(),trip.end());
        for(std::vector<int>::iterator it = sp.begin();it != sp.end();it++)
            std::cout << *it << std::endl;
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << "shortest Span =>"<< sp.shortestSpan() << std::endl;
    std::cout << "longest Span =>"<< sp.longestSpan() << std::endl;
    return 0;
}
