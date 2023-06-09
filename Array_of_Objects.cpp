#include<iostream>
using namespace std;
class student{
    int id;
    int fees;
    public:
        void setData(){
            cout<<"enter the iD of the student "<<endl;
            cin>>id;
        }
        void getData(){
            cout<<"the iD of the student is "<<id<<endl;
        }
};
 int main(){
    //student angad;
    //angad.setData();
    //angad.getData();
    student sfhs[5];
    
    for (int i=0; i<5; i++){
        sfhs[i].setData();
        sfhs[i].getData();
    }
    
    return 0;
 }