#include<iostream>
#include<vector>
using namespace std;

// int bruteforceapproach(vector<int>&arr , int n)
// {
//     for(int i=0;i<n ;i++)
//     {
//         int lsum=0;
//         int rsum=0;

//         for(int j=0 ;j<i;j++)
//         {
//             lsum+=arr[j];
//         }
//         for(int j=i+1; j<n ;j++)
//         {
//             rsum+=arr[j];
//         }

//         if(lsum==rsum)return i;
//     }
//     return -1;
// }

int betterapproach(vector<int>& arr , int n)
{
    vector<int>lsum(n , 0);
    vector<int>rsum (n , 0);

for(int i=1 ;i<n ;i++)
{
    lsum[i]=lsum[i-1]+arr[i-1];
}

for(int i=n-2; i>=0 ;i--)
{
    rsum[i]=rsum[i+1] + arr[i+1];
}

for(int i=0;i<n;i++)
{
    if(lsum[i]==rsum[i])return i;
}
return -1;
}


int main(){


vector<int>arr;
arr.push_back(1);
arr.push_back(7);
arr.push_back(3);
arr.push_back(6);
arr.push_back(5);
arr.push_back(6);
int n=6;

// int ans = bruteforceapproach(arr,n);
int ans = betterapproach(arr,n);
cout<<ans<<endl;

return 0;
}