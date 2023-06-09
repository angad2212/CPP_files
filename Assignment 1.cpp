//question 4
/*
#include<iostream>
using namespace std;
namespace A{
    void abc(){
        cout<<"i am inside namespace A"<<endl;
    }
}
namespace B{
    void abc(){
        cout<<"i am inside namespace B"<<endl;
    }
}
int main(){
    cout<<"using namespace concept"<<endl;
    A::abc();

    return 0;
}
*/

//question 5
/*
#include<iostream>
using namespace std;
class student{
    string name;
    int rollno;
    char degree[50];
    char hostel[50];
    float cgpa;
    public:
    void addDetails(){
        cout<<"Enter the Name: "<<endl;
        cin>>name;
        cout<<"Enter the Roll Number: "<<endl;
        cin>>rollno;
        cout<<"Enter the CGPA: "<<endl;
        cin>>cgpa;
    }
    void updateDetails(){
        int change;
        cout<<"would you like to change any details?"<<endl;
        cin>>change;
        if(change==1){
            cout<<"okay great"<<endl;
        }else{
            cout<<"umm okay"<<endl;
        }
    }
    void displayDetails(){
        cout<<"Name : "<<name<<endl;
        cout<<"Roll Number : "<<rollno<<endl;
        cout<<"CGPA : "<<cgpa<<endl;
    }
};
int main(){
    student s;
    s.addDetails();
    s.updateDetails();
    s.displayDetails();

    return 0;
}
*/

//question 8
#include<iostream>
using namespace std;
class complex {
    private:
    float x;
    float y;
    public:
    void set(float real,float img){
        x=real;
        y=img;
    }
    void display(){
        cout<<x<<"+ i"<<y<<endl;
    }
};
int main(){
    complex c1;
    c1.set(2,3);
    c1.display();
    return 0;
}