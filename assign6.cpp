#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;

    if(num%3==0 && num%5==0){
        cout<<num<<"is divisible by 3 and 5"<<endl;
    } else{
        cout<<num<< "is not divisible by 3 and 5"<<endl;
        
    }
    return 0;
}