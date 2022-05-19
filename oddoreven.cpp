#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number to be tested";
    cin>>x;
    if(x%2==0)
       cout<<"The entered number "<<x<<" is even";
    else
       cout<<"The entered number "<<x<<" is odd";
}