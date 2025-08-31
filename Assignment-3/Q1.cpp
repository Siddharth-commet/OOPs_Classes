// 1.Create a class named 'Rectangle' with two data members- length and breadth and a function to calculate the area which is 'length*breadth'. The class has three constructors which are :
// (a) having no parameter - values of both length and breadth are assigned zero.
// (b) having two numbers as parameters - the two numbers are assigned as length and  
//      breadth respectively.
// (c) having one number as parameter - both length and breadth are assigned that number.
// Now, create objects of the 'Rectangle' class having none, one and two parameters and print their areas.

#include<iostream>
using namespace std;

class rectangle{
     float length, width;
     public: 
     rectangle(){
          length=0;
          width=0;
     }
     rectangle(float l, float w){
          length = l;
          width = w;
     };

     rectangle(float c){
          length = c;
          width = c;
     }

     float area(){
          float area = length*width;
          cout<<area<<"\n";
          return length*width;
     }
};

int main(){
     rectangle a,b(10,20),c(10);
     float areaa = a.area();
     areaa = b.area(); 
     areaa = c.area(); 
     //cout<<areaa;
     return 0;
}