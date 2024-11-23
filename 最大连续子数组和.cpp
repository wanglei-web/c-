#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
  int search(vector<int>& nums){
    int result=INT_MIN;
    int count=nums.size();
    vector<int> temp(count,0);
    temp[0]=nums[0];
    for(int i=1;i<count;i++){
        if(temp[i-1]<0)
            temp[i]=nums[i];
        else 
            temp[i]= temp[i-1]+nums[i];
        
        result=max(result,temp[i]);
       
    }
    return result;
  }
};

int main(){
  vector<int> temp1={1,-4,10,5,-10,23};
  vector<int> temp2={2,-10,4,9,-29,10};

  Solution solution;
  cout<<solution.search(temp1)<<endl;
  
}