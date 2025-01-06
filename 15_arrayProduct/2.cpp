#include<iostream>
using namespace std;
#include<vector>

vector<int> productArray(vector<int> nums){
    int n =nums.size();
    vector<int> ans(n,1); // n size ka array initialized with 1 all element
    for(int i=0;i<n;i++){
        int product =1;
        for(int j=0;j<n;j++){
            if(i != j){
                product *= nums[j];
            }
        }
        ans[i]=product;
    }
    return ans;
}
int main(){
    vector<int> nums={1,2,3,4};
    vector<int>ans=productArray(nums); // O(n^2)------------------------TLE----------------
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}