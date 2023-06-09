//example 1

/*
#include<iostream>
using namespace std;
int main(){
    int a=4;
    int*ptr=&a;
    cout<<"value of a is "<<*ptr<<endl;
    
    //new operator
    int*p= new int(40);
    cout<<"the value at address p is "<<*(p)<<endl;

    int*arr= new int[3];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    delete[] arr; //delete operator: empties the spaces 
    cout<<"the value of arr[0] is "<<arr[0]<<endl;
    cout<<"the value of arr[1] is "<<arr[1]<<endl; 
    cout<<"the value of arr[2] is "<<arr[2]<<endl;  


    return 0;
}
*/

//example 2

#include<iostream>
using namespace std;
class test{
    int*ptr;
    public:
    test(){
        ptr= new int;
        *ptr=100;
    }
    test(int t){
        ptr=new int;
        *ptr=t;
    }
    void display(){
        cout<<"the value of object's pointer is: "<<*ptr<<endl;
    }
};
int main(){
    test angad;
    test angad1(200);
    angad.display();
    angad1.display();
    return 0;
}

