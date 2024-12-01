#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<iterator>

template <typename T>
typename T::iterator  easyfind(T& trgt, int value){
    typename T::iterator it = std::find(trgt.begin(),trgt.end(),value);
    if(it != trgt.end())
        return it;
    else
        throw "baaaad trip !! \n";
}
