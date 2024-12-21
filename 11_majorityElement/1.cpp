#include<iostream>
using namespace std;
#include<vector>    // return in sorted array pair == target (return index or value);
vector<int> pairSum(vector<int> nums, int target){
    int n =nums.size();
    vector<int> ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           if(nums[i]+nums[j] == target){// for storing index push back i and j not nums[i] && nums[j];
             ans.push_back(nums[i]); 
             ans.push_back(nums[j]);
             return ans;
           }
        }
    }
    return ans;
}

int main(){
    vector<int> arr={2,7,11,15};
    int target = 13;
    vector<int> ans = pairSum(arr,target);
    cout<<"pair num is : "<<ans[0]<<" "<<ans[1]<<endl;
     
    return 0;
}
