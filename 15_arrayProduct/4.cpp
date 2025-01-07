#include<iostream>
using namespace std;
#include<vector>
vector<int> productExceptSelf(vector<int>& nums) {
        int n =nums.size();
        vector<int> ans(n,1);
       
        //prefix => ans   prefix ko ans me store kara diye
        for(int i=1;i<n;i++){
            ans[i]=ans[i-1]*nums[i-1];
        }
         //suffix
         int suffix=1;
        for(int i=n-2;i>=0;i--){
            suffix *=nums[i+1];   //Ith suffix
            ans[i] *=suffix;
        }
     return ans;
    }
int main(){
    vector<int> nums={1,2,3,4,5};
    vector<int>ans=productExceptSelf(nums); //T.C => O(N)--------------S.C =>O(1)--------------------------
    cout<<"[";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<",";
    }
    cout<<"]";
    return 0;
}