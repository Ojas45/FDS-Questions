#include<iostream>
using namespace std;
int main(){
      int n;
      int i;
      cout<<"Enter the number to check if it is prime or not: "<<endl;
      cin>>n;
      bool isPrime=true;
      for(i=2;i<=n-1;i++){
            if(n%i==0){
                  isPrime=false;
                  break;
            }
      }
      if(isPrime){
            cout<<"The number is prime"<<endl;
      }else{
            cout<<"The number is composite"<<endl;
      }
      return 0;

}
