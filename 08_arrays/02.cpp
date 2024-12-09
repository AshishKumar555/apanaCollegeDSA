// Find the greatest  number in an array

#include<iostream>
using namespace std;
int main(){
  int nums[]={10,30,-16,40,-50};
  int size=5;
  int largest=INT32_MIN;

  for(int i=0;i<size;i++){
    if(nums[i] > largest){
      largest =nums[i];
    }
  }

  cout<<"Largest number is : "<<largest<<endl;
    return 0;
}