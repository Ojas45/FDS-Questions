#include<iostream>
using namespace std;
int main(){
    cout<<"To find greatest of three numbers"<<endl;
    
    int a;
    int b;
    int c;
    
    cout<<"Enter first number:";
    cin>>a;

    cout<<"Enter second number:";
    cin>>b;

    cout<<"Enter third number:";
    cin>>c;

    if(a>=b && a>=c)
      cout<<"largest number is:"<<a<<endl;

    else if(b>=a && b>=c)
      cout<<"largest number is:"<<c<<endl;

    else
      cout<<"largest number is:"<<c<<endl;
    return 0;

}