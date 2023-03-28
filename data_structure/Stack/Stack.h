#include<iostream>
using namespace std;
enum ResultCode{Nomemory,Underflow,Overflow,Outflow,OutOfBounds,DivideByZero,MissingOperand};
template<class T>
class Stack
{
    public:
        virtual ~Stack(){}
        virtual void Push(const T &x)=0;
        virtual void Pop()=0;
        virtual T Top() const=0;
        virtual bool IsEmpty() const=0;
        virtual bool IsFull() const=0;
};

