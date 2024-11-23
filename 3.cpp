// #include <iostream>
// #include <vector>
// using namespace std;

// vector<vector<int>> multimatrix(const vector<vector<int>>&a,const vector<vector<int>>&b){
//     int m1=a.size();
//     int n1=a[0].size();
//     int m2=b.size();
//     int n2=b[0].size();
//     if(n1!=m2)
//     {
//         cout<<"error dimensons"<<endl;
//         return {};
//     }
//     vector<vector<int>>result(m1,vector<int>(n2,0));
//     for(int i=0;i<m1;i++){
//         for(int j=0;i<n2;j++){
//             for(int k=0;k<n1;k++){
//                 result[i][j]+=a[i][k]*b[k][j];
//             }
//         }
//     }
//     cout<<"calculate success"<<endl;
//     return result;
// }


#include <iostream>
using namespace std;

int fun()
{
    int a = 10;
    return a;
}

int main() {

    int (*p)() = fun;
    cout<<(*p);

    return 0;
}
