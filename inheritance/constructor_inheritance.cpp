//shubham kumbhar
//overriding_inheritance 
/*
     class base1 and base2 is inherited by deriverd
     same function name so how to call ?
     using scope resolution 
     class-name :: same-fun-name()
*/



#include<iostream>
using namespace std;

class base1
{
     protected:
     int a,b;
     public:
          base1(int i,int j)
          {
              a=i;
              b=j;
          }

          void show()
          {
               cout<<"a ="<<a<<"b = "<<b<<endl;
          }

};


class der : public base1
{
     public:
     int c;
     public:
        dev():base1(10,20)
        {
            c=a+b
        }

          void show()
          {
              base1::show()
               cout<<"sum= "<<c;
          }
};

int main()
{
     der d,d2;
     d.show();
     d2.show();
     return 0;
}
