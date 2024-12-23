#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>                   // TC ---  O(n logn + n)=>  nlogn

int majorityElement(vector<int>& nums) { // a bit changes from my side 
       int freq =1,ans =nums[0];
       int n =nums.size();
       for(int i=0;i<n;i++){
        if(nums[i] == nums[i+1]){
            freq++;
        }
        else{
            freq =1,ans =nums[i+1];
        }
        
        if(freq >n/2){
          return ans;
        }
       }
       return -1;
    }

int main(){
 
    vector <int> arr2 ={1,2,2,1,1};
    sort(arr2.begin(),arr2.end());
    int ans = majorityElement(arr2);
    cout<<"Majority Element is : "<<ans<<endl;

    return 0;
}
    