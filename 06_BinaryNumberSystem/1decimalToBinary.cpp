#include<iostream>
using namespace std;

int dicimalToBinary(int num){
    int ans=0;
    int pow=1;
    while(num>0){
     int rem=num%2;
     num=num/2;
     ans=ans+(rem*pow);
     pow=pow*10;
      
    }
    return ans;
}


int main(){
 int number=453;
 cout<<dicimalToBinary(number)<<endl;
    return 0;
}