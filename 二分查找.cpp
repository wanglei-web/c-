#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
  int search(vector<int>& nums,int target){
    int left=0;
    int right=nums.size()-1;
    while(left<=right){
      int middle=left+(right-left)/2;
      if(nums[middle]>target){
        right=middle-1;
      }else if(nums[middle]<target)
      {
        left=middle+1;
      }else{
        return middle;
      }
    }
    return -1;
  }
};

int main(){
  vector<int> temp={0,1,3,4,5,6,7};
  int target1=3;
  int target2=2;
  Solution solution;
  cout<<solution.search(temp,target1)<<endl;
  
}