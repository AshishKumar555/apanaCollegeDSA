#include<iostream>
using namespace std;
#include<vector>
vector<int> productArray(vector<int> nums){
    int n =nums.size();
     int product =1;
    for(int i=0;i<n;i++){
         product *= nums[i];
    }

    for(int i=0;i<n;i++){
        nums[i]=product/nums[i]; //solve without division ============--------------!
    }
    return nums;
}
int main(){
    vector<int> nums={1,2,3,4};
    vector<int> ans=productArray(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" "; 
    }
    return 0;
}