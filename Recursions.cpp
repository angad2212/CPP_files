#include<iostream>
using namespace std;
/*int factorial(int a){
    if(a<=1){
        return 1;
    };
    return a * factorial(a-1);
};
*/
int fibonacci(int n){
    if(n<2){
        return 1;
    };
    return fibonacci(n-2)+fibonacci(n-1);
};
/*int main(){
    int n;
    cout<<"enter any number"<<endl;
    cin>>n;
    cout<<"factorial of the number is "<<factorial(n)<<endl;
    return 0;
}
*/

int main(){
    int a;
    cout<<"enter any number"<<endl;
    cin>>a;
    cout<<"fibonacci series will be: "<<fibonacci(a)<<endl;
    return 0;
}

