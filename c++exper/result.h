#ifndef _result_h
#define _result_h
#include<iostream>
#include<string>
using namespace std;

class result
{
    private:
        int person;
        string name;
        int getscore[5];
        double finalscore;
    public:
        result()
        {
            cout<<"����ѡ�ֱ�ź�����,�ո����"<<endl;
            cin>>person>>name;
            cout<<"���"<<endl;
            for(int i=0;i<=4;i++)
            {
                cout<<i+1<<"�Ų���"<<"���"<<endl;
                cin>>getscore[i];
            }
        
            int max = getscore[0];
            for(int i = 0;i<=4;i++)
            {
                if(max<=getscore[i])
                {
                    max = i;
                }
            }
            int min = getscore[0];
            for(int i = 0;i<=4;i++)
            {
                if(min>=getscore[i])
                {
                    min = i;
                }
            }
            getscore[min]=0;
            getscore[max]=0;
            for(int i=0;i<=4;i++)
            {
                finalscore+=float(getscore[i]);
            }
            finalscore=finalscore/3;

        }
        void output()
        {
            cout<<person<<":"<<finalscore<<endl;
        }

};




#endif
