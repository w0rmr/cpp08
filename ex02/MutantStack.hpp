#pragma once
#include <stack>
#include <deque>
#include <iterator>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T> {
public:
    typedef typename std::deque<T>::iterator iterator;
    typedef typename std::deque<T>::const_iterator const_iterator;

    MutantStack() : std::stack<T>() {}
    MutantStack(const MutantStack<T>& other) : std::stack<T>(other) {}
    MutantStack<T>& operator=(const MutantStack<T>& other) {
        std::stack<T>::operator=(other);
        return *this;
    }
    ~MutantStack() {}
    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }
    const_iterator begin() const { return this->c.begin(); }
    const_iterator end() const { return this->c.end(); }
};