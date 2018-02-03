#include <iostream>
using namespace std;
 
class construct
{ 
public: 
    int a, b;
         
        // Default Constructor
    construct()
    {
      cout<< " base class \n"; 
       a = 10;
        b = 20;
    }
};
class con1: public construct
{
public:
    int a, b;

        // Default Constructor
    con1()
    {
        a = 10;
        b = 20;
    }
};

 
int main()
{
        // Default constructor called automatically
        // when the object is created
    construct c;
   cout<< "a: "<< c.a << endl << "b: "<< c.b;
con1 c1;
cout<< " \n in c1->a: "<< c1.a << endl << "in c1-->b: "<< c1.b;    
cout<< "this is last statement";

return 1;


}
