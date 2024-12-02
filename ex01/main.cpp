#include "Span.hpp"
int plus(){
    int r_nbr;
    std::ifstream urandom("/dev/urandom", std::ios::in | std::ios::binary);
    urandom.read(reinterpret_cast<char*>(&r_nbr), sizeof(r_nbr));
    srand(r_nbr);
    return rand() / 2;
}

int main()
{
    Span sp = Span(100);
    std::vector<int> trip(100);
    std::generate(trip.begin(),trip.end(),plus);
    try{
        sp.addNumber(trip.begin(),trip.end());
        for(std::vector<int>::iterator it = sp.begin();it != sp.end();it++)
            std::cout << *it << std::endl;
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}
