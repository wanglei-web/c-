#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class Solution{
public:
  int search(int target){
    int sum=1; 
    int root=round(sqrt(target));
    
    for(int i=2;i<=root;i++){
        int n=target/i;
        if(n*i==target)
           sum+=n+i;  
    }
    if(root*root==target)
           sum-=root;  
    return sum==target;
  }
};

int main(){
    int target1=28;
    int target2=15;
    Solution solution;
    cout<<solution.search(target2)<<endl;
  
}