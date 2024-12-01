#include "easyfind.hpp"

int main(void){
    
    std::vector<int> arr ;
    int int_arr[] = {1,2,3,4,5,6,7,8,9,0};
    for(unsigned long i = 0 ;i <= sizeof(int_arr)/sizeof(int_arr[0]) -1  ;i++){
        arr.push_back(int_arr[i]);
    }
    try{
        std::vector<int>::iterator it = easyfind(arr,40);
        std::cout<< *it<< " found ! " << std::endl;
    }catch(const char* e){
        std::cerr << e << std::endl;
    }
    return 0;
}