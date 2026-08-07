#include<iostream>

class Stack_Mod{
    int *arr;
    int capacity;
    int top;
public:
    Stack_Mod(int capacity) {
        this->capacity=capacity;
        arr= new int[this->capacity];
        top=-1;
    }

    void push(int x) {
   
        if (top == capacity - 1) {
            std::cout << "Stack Overflow"<<std::endl;
            return;
        }
    
        arr[++top] = x;
    }
    int pop() {
        if (top == -1) {
            std::cout << "Stack Underflow"<<std::endl;
            return -1;
        }

        return arr[top--];
    }
    int displayTop() {
        if (top == -1) {
            std::cout << "Stack is empty"<<std::endl;
            return -1;
        }
        return arr[top];
    }

};

int main(void) {
    Stack_Mod st(4);
    std::cout<<st.pop()<<std::endl;

    // // pushing elements
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.push(4);
    
    // std::cout<<st.displayTop()<<std::endl;
    // std::cout<<st.pop()<<std::endl;
    // std::cout<<st.pop()<<std::endl;
    // std::cout<<st.displayTop()<<std::endl;

}