#include<iostream>
using namespace std;
float moneyRecieved(int money, float factor=1.04){//factor is a default argument in this code
    return money*factor;
};//defualt argument is to be written after the first one

int strlen(const char*p){

};// wont change the value
int main (){
    int mon;
    float mon2=mon;
    cout<<"enter the amount of money you have "<<endl;
    cin>>mon;
    mon2=moneyRecieved(mon);
    cout<<"the amount of money you will recieve will be "<<mon2<<endl;
    cout<<"if you are a VIP the amount of money you will recieve will be "<<moneyRecieved(mon,1.1)<<endl;
    return 0;
}

