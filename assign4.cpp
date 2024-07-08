#include<iostream>
using namespace std;
int main(){
    int i;
    int n;
    cout<<"Please specify the number of natural numbers for which you want to print the sum:"<<endl;
    cin>>n;
    int sum=0;
    for(i=0;i<=n;i++){
        sum+=i;
    }
    cout<<"The sum is:"<<sum<<endl;

    return 0;
}