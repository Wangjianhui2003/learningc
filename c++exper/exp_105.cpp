#include<iostream>
#include<string>
#include "result.h"
int main()
{
    cout<<" �������ѡ������"<<endl;
    int compenum;
    cin>>compenum;
    result A[compenum];//����һ��result�������飬ÿ��������Ĺ��캯����Ĵ�����Զ�ִ��

    for(int i = 0;i<=compenum-1;i++)//�����źͷ���
    {
        A[i].output();
    }
        
     
    return 0;
}