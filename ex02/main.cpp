#include "MutantStack.hpp"
#include <stack>

int main(){
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    // mstack.pop();
    std::cout << " top => "<<  mstack.top() << std::endl;
    // mstack.pop();
    // std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> stack(mstack);
    while (!mstack.empty()) {
        // std::cout << "top now =>  " << stack.top() << std::endl;
        std::cout << "is stack empty ? " << "\'" << mstack.empty() << "\'" << std::endl;
        // std::cout << stack.top() <<" ";
        mstack.pop();
    }
    return 0;
}
