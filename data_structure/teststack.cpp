#include<iostream>
#include<string>
#define initsize 50;
#define increasesize 10;
using namespace std;
struct intstack
{
    int *base;
    int *top;
    int stacksize;
};//定义一个字符串栈
void initstack(intstack &S)
{
    S.base=new int[50];
    S.top=S.base;
    S.stacksize=50;
}
void Push(intstack &S,int element)
{
    if((S.top-S.base)/4>=S.stacksize)
    {
        S.base=(int *)realloc(S.base,(S.stacksize + 10) * 10);
    }
    //S.top=S.base + S.stacksize;
    S.stacksize += 10;
    *S.top++ = element;
    cout<<"done!"<<endl;
}
int gettop(intstack &S)
{
    if (S.top == S.base) 
    {
        cout<<"ERROR"<<endl;
        return 0;
    }
    cout<<*(S.top - 1)<<endl;
    return 0;

}
int main()
{
    intstack listnum;
    initstack(listnum);
    Push(listnum,5);
    Push(listnum,6);
    gettop(listnum);
    gettop(listnum);

    return 0;


}