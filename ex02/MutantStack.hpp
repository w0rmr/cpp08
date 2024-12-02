#pragma once 
#include <iostream>
#include <string>
#include <vector>

template <typename T>
class MutantStack{
    private:
        std::vector<T> stack;
    public:
        bool empty(); // Returns whether the stack is empty
        size_t size(); // Returns the size of the stack
        T& top();
        void push(T g); // Adds the element 'g' at the top of the stack
        void pop(); // Deletes the most recent entered element of the stack
        typename std::vector<T>::iterator begin(void);
        typename std::vector<T>::iterator end(void);
        typedef typename std::vector<T>::iterator iterator;
        MutantStack();
        ~MutantStack();
};
template <typename T>
MutantStack<T>::MutantStack(){}

template <typename T>
typename std::vector<T>::iterator MutantStack<T>::begin(void){
    return stack.begin();
}

template <typename T>
typename std::vector<T>::iterator MutantStack<T>::end(void){
    return stack.end();
}

template <typename T>
MutantStack<T>::~MutantStack(){}

template<typename T>
bool MutantStack<T>::empty(){
    return stack.empty();
}

template<typename T>
size_t MutantStack<T>::size() {
    return stack.size();
}

template<typename T>
 T& MutantStack<T>::top() {
    return stack.back();
}

template<typename T>
void MutantStack<T>::push(T g){
    stack.push_back(g);
}

template<typename T>
void MutantStack<T>::pop(){
    stack.pop_back();
}
