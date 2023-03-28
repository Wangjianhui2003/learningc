#include "uSeqStack.h"
int main()
{
    try{
        SeqStack<double>dstk(2);
        dstk.Push(3.6);dstk.Push(8.8);
        cout<<dstk;
        if(dstk.IsEmpty()) cout<<"Is empty"<<endl;
        else cout<<"Is not empty!"<<endl;
        dstk.Pop();dstk.Pop();

    }

catch(ResultCode err){
    switch(err){
        case Overflow:cout<<"Overflow!"<<endl;break;
        case Underflow:cout<<"Underflow"<<endl;break;
    }
}
return 0;
}