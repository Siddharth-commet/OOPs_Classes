// 1.Create a class named 'Rectangle' with two data members- length and breadth and a function to calculate the area which is 'length*breadth'. 
// The class has three constructors which are :
// (a) having no parameter - values of both length and breadth are assigned zero.
// (b) having two numbers as parameters - the two numbers are assigned as length and  
//      breadth respectively.
// (c) having one number as parameter - both length and breadth are assigned that number.
// Now, create objects of the 'Rectangle' class having none, one and two parameters and print their areas.

// 2.Redefine the above program by creating an array of objects of the class Rectangle and calculate area for each object calling different 
// constructors.
//  Also implement constructors with default arguments and destructor in this program.

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
     ~rectangle() {
        cout << "Destructor called for rectangle with area " << area() << "\n";
    }

     float area(){
          float area = length*width;
          cout<<area<<"\n";
          return length*width;
     }
};

int main(){
    rectangle arr[] = { {10,20}, {4}, {10}};
    for (int i = 0; i < 3; i++)
    {
        arr[i].area();
    }
    
    return 0;
}