#include<iostream>
using namespace std;
#include<vector>  // Brute force approach O(n^2)
int maxArea(vector<int>& height) {
        int maxWater=0;
        for(int i=0;i<height.size();i++){
            for(int j=i+1;j<height.size();j++){
                int ht =min(height[i],height[j]);
                int width =j-i;
                int area =width *ht;
                maxWater =max(maxWater,area);
            }
        }
        return maxWater;
        
    }
int main(){
    vector<int> height={1,8,6,2,5,4,8,3,7};

    cout<<"Answer is :"<<maxArea(height)<<endl;
    return 0;
}