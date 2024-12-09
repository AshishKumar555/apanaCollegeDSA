// Find the greatest and smallest number in an array

#include<iostream>
using namespace std;
int main(){
  int nums[]={10,30,-16,40,-50};
  int size=5;
  int smallest=INT32_MAX;

  for(int i=0;i<size;i++){
    // if(nums[i] < smallest){
    //   smallest =nums[i];
    // }
    smallest =min(nums[i],smallest);
  }

  cout<<"smallest number is : "<<smallest<<endl;
    return 0;
}