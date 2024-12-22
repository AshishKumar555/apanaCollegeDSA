#include<iostream>
using namespace std;
#include<vector>       // Optimised approach
vector<int> pairSum(vector<int> nums, int target){
    int n =nums.size();
    vector<int> ans;
    int i=0,j=n-1;
   while(i < j){   //  i<=j not valid (when i==j both point same index that is not a pair )
    int pairSum = nums[i]+nums[j];
    if(pairSum == target){
        ans.push_back(i);
        ans.push_back(j);
        return ans;
    }
    pairSum > target ? j-- : i++;
   }
    return ans;
}

int main(){
    vector<int> arr={2,7,11,15};
    int target = 18;
    vector<int> ans = pairSum(arr,target);
    cout<<"pair num is : "<<ans[0]<<", "<<ans[1]<<endl;
     
    return 0;
}
