#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the 3 numbers";
    cin>>a>>b>>c;
    if(a>b && a>c)
        cout<<a<<"  is largest";
    else if(b>a && b>c)
        cout<<b<<"  is largest";
    else if(c>a && c>b)
        cout<<c<<"  is largest";
        
}