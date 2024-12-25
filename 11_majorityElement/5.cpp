#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>                   // TC ---logn

int majorityElement(vector<int>& nums) { //  Moore's algorithm 
       int freq =0, ans=0 ;
       int n =nums.size();
       for(int i =0;i<n;i++){
            if(freq ==0){
                ans =nums[i];
            }
            if(ans == nums[i]){
                freq++;
            }else{
                freq--;
            }
       }
       return ans;
    }

int main(){
 
    vector <int> arr2 ={1,2,2,2,1,3,3,3,3};
   
    int ans = majorityElement(arr2);
    cout<<"Majority Element is : "<<ans<<endl;

    return 0;
}
    