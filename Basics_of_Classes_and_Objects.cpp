#include<iostream>
using namespace std;
//why classes ? 
//structures can not hide data
class Student{
    //everything in private can not be accessed in the main code using .a 
    private:
    int a,b,c;

    //public members can be accessed using .a
    public:
    int d,e,f;
    void setData(int x,int y,int z);
    void getData(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of v is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
        cout<<"the value of e is "<<e<<endl;
        cout<<"the value of f is "<<f<<endl;
    }
};
//this function is declared outside of class
//scope resolution operator (::) is used to access the function in order to access the function declared in that particular class
void Student :: setData(int x, int y, int z){
    a=x;
    b=y;
    c=z;
}
int main(){
    Student angad;
    angad.d=23;//accessed using .d
    angad.e=59;
    angad.f=79;
    angad.setData(1,2,3);//this function was used in order to access the private members of the class
    angad.getData();
    return 0;
}
