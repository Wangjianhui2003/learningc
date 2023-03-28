#include<iostream>


#ifndef _SeqStack_h
#define _SeqStack_h
#include "Stack.h"
template<class T>
class SeqStack:public Stack<T>
{
    public:
        SeqStack(int mSize);
        ~SeqStack();
        void Push(const T &x);
        void Pop();
        T Top()const;
        bool IsEmpty()const;
        bool IsFull()const;
    private:
        void Output(std::ostream & out)const;
        T *s;
        int maxSize;
        int top;
        template<class U>
        friend ostream &operator<< (std::ostream & out,const SeqStack<U>& s);

};
#include "uSeqStack.h"

#endif
