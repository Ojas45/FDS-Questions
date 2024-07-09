#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age:"<<endl;
    cin>>age;

    if(age<=12){
        cout<<"You are child"<<endl;

    } else if(age>12 && age<=18){

        cout<<"You are teenage"<<endl;
    }else{
        cout<<"You are adult"<<endl;
    }
    
    return 0;

}