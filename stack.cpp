#include<iostream>
using namespace std;

int index=0;
        int stack[100];


class Stack{
    public:
        int pop();
        void push(int n);
        bool isEmpty();
        int top();
        
            
};

void Stack::push(int n)
{
    ++index;
    stack[index]=n;
}

int Stack::pop()
{
    stack[index]=0;
    --index;
}

int Stack::top()
{
    return stack[index];
}

bool Stack::isEmpty()
{
    if(index>=1){
        return false;
    }
    else{
        return true;
    }
}

int main()
{
    Stack s;
    s.push(1);
    cout<<s.top()<<"\n";
    cout<<s.isEmpty()<<"\n";
    s.pop();
    cout<<s.isEmpty()<<" ";


}