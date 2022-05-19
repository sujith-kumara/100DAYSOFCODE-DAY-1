#include<iostream>
using namespace std;
int main(){
    char c;
    bool isvowelupper,isvowellower;
    cout<<"Enter the character";
    cin>>c;
    isvowellower = (c=='a' ||c=='e' || c=='i' || c=='o' || c=='u');
    isvowelupper = (c=='A' ||c=='E' || c=='I' || c=='O' || c=='U');

    

    if(isvowellower || isvowelupper)
        cout<<"The given character is a vowel";
    else
        cout<<"The given character is a consonant";
    return 0;
}