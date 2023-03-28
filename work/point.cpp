#include <iostream>
using namespace std;
int main()
{
     int i = 1;
     int b = 2;
     cout << &i << endl
          << &b << endl; //& take variable ip
     int *point_i = &i;
     int *point_b = &b;
     cout << point_b << endl
          << point_i << endl
          << *point_b << endl; // point_b means ip but *point_b means variablea
     int temp = *point_i;      // temp=*point_i make a new ip for temp
     cout << temp << endl;
     point_i = &b;
     cout << *point_i << endl
          << temp << endl
          << &temp << endl;

     int a = 1;
     int *point = &a;
     cout << *point << endl;
     *point = 3;
     cout << a << endl; //*point stand for a
}
