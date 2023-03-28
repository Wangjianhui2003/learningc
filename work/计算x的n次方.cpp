#include <iostream>
using namespace std;
double power(double x, int n)
{
    double num=1.0;
    while (n--)
     num*=x;
    return num;

}


int main()
{
    double x;
    int n;
    cout<<"please enter the number"<<endl;
    cin>>x;
    cin>>n;
    cout<<power(x,n);
    return 0;
    
}