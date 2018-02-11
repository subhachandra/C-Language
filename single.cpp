#include<iostream>
using namespace std;
class Single
{

Single()
{

}
static Single *instance1;
public:
static Single* instance()
{
if(instance1!=NULL)
{
cout<<"it is in if block";
 instance1=new Single();
}
else{
cout<<"it is in else block";
}
return instance1;
}

};

Single *Single::instance1=NULL;
int main()
{
cout<<Single::instance();
return 0;
}
