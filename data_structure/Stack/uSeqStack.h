#include<iostream>
using namespace std;
#include "SeqStack.h"
#ifndef _uSeqStack_h
#define _uSeqStack_h


template<class T>
SeqStack<T>::SeqStack(int mSize)
{
    maxSize = mSize;
    s = new T[maxSize];
    top = -1;
}
template<class T>
SeqStack<T>::~SeqStack()
{
    delete []s; 
}

template<class T>
void SeqStack<T>::Push(const T &x)
{
    if(IsFull())
        throw Overflow;
    s[++top] = x;

}

template<class T>
void SeqStack<T>::Pop()
{
    if(IsEmpty()) throw Underflow;
    top--;
}
template<class T>
T SeqStack<T>::Top()const
{
    if(IsEmpty()) throw Underflow;
    return s[top];
}
template<class T>
bool SeqStack<T>::IsEmpty()const
{
    return(top==-1);
}
template<class T>
bool SeqStack<T>::IsFull()const 
{
    return(top==maxSize-1);
}
template<class T>
void SeqStack<T>::Output(ostream & out)const
{ 
    int i = top;
    out<<endl<<"Stack contains:";
    while(i!=-1) out<<s[i--]<<" ";
    out<<endl;
}
template<class T>
ostream &operator<<(ostream& out,const SeqStack<T>&s)
    {
        s.Output(out);
        return out;
    }




#endif