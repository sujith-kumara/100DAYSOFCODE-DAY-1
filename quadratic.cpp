#include<bits/stdc++.h>
using namespace std;
int main(){
    float a,b,c,x1,x2,discriminant,realpart,imaginarypart;
    cout<<"Enter a,b,c";
    cin>>a>>b>>c;
    discriminant = b*b -(4*a*c);

    if(discriminant > 0)
    {
        cout<<"The roots are real and different"<<endl;
        x1 = (-b+sqrt(discriminant))/(2*a);
        x2 =(-b-sqrt(discriminant))/(2*a);
        cout<<"The root 1 is "<<x1<<endl;
        cout<<"The second root is "<<x2<<endl;

    }
    else if(discriminant==0)
    {
        cout<<"The roots are real and equal";
        x1=-b/(2*a);
        cout<<"x1=x2= "<<x1;
    }
    else
    {
        cout<<"The roots are complex and different";
        realpart = -b/(2*a);
        imaginarypart = sqrt(-discriminant)/(2*a);
        cout<<"x1 = "<<realpart<<"+"<<imaginarypart<<"i"<<endl;
        cout<<"x2 = "<<realpart<<"-"<<imaginarypart<<"i"<<endl;
    }
}