#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"Enter the numbers to be swaped\n";
    cin>>a>>b;
    cout<<"The number before Swapping "<<a<<" "<<b<<endl;
    temp = a;
    a = b;
    b = temp;
    cout<<"The number after swapping "<<a<<" "<<b<<endl;
    return 0;
}