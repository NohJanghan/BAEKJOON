// BOJ Silver 4 - 스택
#include <iostream>
#include <vector>


class Stack: public std::vector<int> {
  public:
    void push(int X) {
        push_back(X);
    }
    int pop() {
        if(empty()) return -1;

        int res = back();
        pop_back();
        return res;
    }
    int top() {
        if(empty()) return -1;
        else return back();
     }
};

int main() {
    Stack stack;
    
    int cases;
    std::cin >> cases;

    std::string order;
    int index = 0;
    for (int i = 0; i < cases; i++)
    {
        std::cin >> order;
        
        if (order == "push")
        {
            std::cin >> index;
            stack.push(index);
        } else if(order == "pop") {
            std::cout << stack.pop() << std::endl; 
        } else if(order == "size") {
            std::cout << stack.size() << std::endl;
        } else if(order == "top") {
            std::cout << stack.top() << std::endl;
        } else if(order == "empty") {
            std::cout << stack.empty() << std::endl;
        }
    }
    

    return 0;
}