#include<iostream>
using namespace std;
int main(){
      int n;
      int i;
      cout<<"Enter the number:"<<endl;
      cin>>n;
      int fact=1;
      for(i=1;i<=n;i++){
            fact*=i;
      }
      cout<<"The factorial of a number is:"<<fact<<endl;

      return 0;
}