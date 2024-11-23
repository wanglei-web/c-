#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

class Solution{
public:
  vector<vector<int>> search(vector<int>& nums,int target){
    vector<vector<int>> result;
    if(nums.size()<4) return{};
    sort(nums.begin(),nums.end());
    int length=nums.size();
    for(int i=0;i<length-3;i++){
        if(i>0&&nums[i]==nums[i-1])
           continue;
        for(int j=i+1;j<length-2;j++){
            if(j>i+1&& nums[j]== nums[j-1])
            continue;
            int left=j+1,right=length-1;
            while(left<right){
                int sum=nums[i]+nums[j]+nums[left]+nums[right];
                if(sum==target){
                    result.push_back({nums[i],nums[j],nums[left],nums[right]});
                    while(left<right&&nums[left]==nums[left+1])
                        left++;
                    while(left<right&&nums[right]==nums[right-1])
                        right--;  
                    left++;
                    right--;  
                }else if(sum<target){
                    left++;
                }
                else{
                    right--;  
                }

            }
        }
    }
   
    return result;
  }
};

int main(){
    vector<int> temp1={1,0,-1,0,-2,2};
    int target1=0;
    vector<int> temp2={2,2,2,2,2};
    int target2=8;
    Solution solution;
    vector<vector<int>> result=solution.search(temp1,target1);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<4;j++){
        cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
  
}