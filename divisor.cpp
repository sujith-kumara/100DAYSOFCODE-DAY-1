#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"Enter the divisor and divident";
    cin>>a>>b;
    c=a/b; 
    d=a%b;
    cout<<"The qoutient is "<<c<<endl;
    cout<<"The remainder is "<<d;
    return 0;
}