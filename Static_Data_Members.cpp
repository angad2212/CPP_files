#include<iostream>
using namespace std;
class student{
    int Id;
    static int count; //static data member
    //when static used, it is shared by every object, and seperate objects do not have different count

    public:
        void setData(){
            cout<<"enter student Id "<<endl;
            cin>>Id;
            count++;
        }
        void displayData(){
            cout<<"Student Id is "<<Id<<" and this is student number "<<count<<endl;
        }
        static void getCount(){ //static member function
            cout<<"the value of count is "<<count<<endl;
        }
};
int student :: count; //default value is 0, but a value can be assigned here
int main(){
    student angad,bilawal,rohan;
    angad.setData();
    angad.displayData();
    student::getCount();

    bilawal.setData();
    bilawal.displayData();
    student::getCount();

    rohan.setData();
    rohan.displayData();
    student::getCount();
    return 0;
}