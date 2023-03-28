#include <iostream>
using namespace std;
#ifndef _box_h
#define _box_h 
class Box  //定义一个盒子类型，并给定计算体积的成员函数
{
   public:
      double length;   
      double breadth;  
      double height;   
      double get(void);
      void set( double len, double bre, double hei );
};

double Box::get(void)
{
    return length * breadth * height;
}
 
void Box::set( double len, double bre, double hei)
{
    length = len;
    breadth = bre;
    height = hei;
}
#endif