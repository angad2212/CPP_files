//example 1

#include<iostream>
using namespace std;
class rectangle{
    float length;
    float width;
    public:
    //constructor
    rectangle(float l, float w){
        length=l;
        width=w;
    }
    void area(){
        cout<<length*width<<endl;
    }
    //destructor
    ~rectangle(){
        cout<<"i am destructor"<<endl;
    }
    //copy constructor
    rectangle(const rectangle &obj){
        length = obj.length;
        width = obj.width;
    }
};
//the constructor can also be defined here:
//rectangle::rectangle(float l, float w){
  //  length=l;
   // width=w;
//}

int main(){
    //rectangle r;
    //.area();
    rectangle p(2,3);
    p.area();
    rectangle t(p); // also, 'rectangle t=p;' can also be used here
    t.area();
    return 0;
}




//example 2

#include <iostream>
using namespace std;
class X {
 int a;
public:
 X(int j) { 
 a = j; 
 }
 int geta() { 
 return a; 
 }
};
int main()
{
 X ob = 99; // passes 99 to j
 cout << ob.geta(); // outputs 99
 return 0;
}

//constructors:
//it should be declared in the public portion of the class
//they are automatically called when object is created