#include "box.h"
using namespace std;
int main( )
{
   Box Box1;        
   Box Box2;        
   Box Box3;        
   double volume = 0.0;     
   Box1.height = 5.0; 
   Box1.length = 6.0; 
   Box1.breadth = 7.0;
   Box2.height = 10.0;
   Box2.length = 12.0;
   Box2.breadth = 13.0;

   volume = Box1.height * Box1.length * Box1.breadth;
   cout << "Box1 的体积：" << volume <<endl;
   volume = Box2.height * Box2.length * Box2.breadth;
   cout << "Box2 的体积：" << volume <<endl;
 
   Box3.set(16.0, 8.0, 12.0); 
   volume = Box3.get(); 
   cout << "Box3 的体积：" << volume <<endl;
   return 0;
}