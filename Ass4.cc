#include<iostream>
using namespace std;
/*
Write a program in C++ to implement Stack. Design the class for stack and the operations to
be performed on stack. Use Constructors and destructors. The objective of this assignment is
to learn the concepts classes and objects, constructors and destructors.
*/
const int max_size = 100;

class stack{
    int top;
    int arr[max_size];

    public:
    stack(){
        top = -1;
    }

    void displaymenu(void){
    cout<<"<---STACK OPERATIONS--->\n";
    cout<<"1.Push\n2.Pop\n3.Peek\n4.Exit\n";
    cout<<"Enter your choice here: ";
    }

    int isEmpty(void){
        if(this->top == -1){
            return 1;
        }
        return 0;
    }

    int isFull(void){
        if(this->top == max_size-1){
            return 1;
        }
        return 0;
    }

    void push(int value){
        if (isFull() == 1){
            cout<<"Stack Overflow\n";
        }
        else{
            top++;
            arr[top] = value;
        }
    }

    int pop(void){
        if (isEmpty() == 1){
            cout<<"Stack Underflow\n";
        }
        else{
            top--;
        }
    }

    int peek(void){
        if (isEmpty() == 1){
            cout<<"Stack is empty\n";
            return -1;
        }
        else{
            return arr[top];
        }
    }

    // ~stack(){
    //     cout<<"Stack is destroyed\n";
    // }

};


int main(){
    stack s;
    s.displaymenu();
    // s.push(101);
    // cout<<s.peek()<<endl;
    // s.pop();
    return 0;
}