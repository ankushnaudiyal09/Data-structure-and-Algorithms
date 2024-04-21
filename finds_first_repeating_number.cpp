
#include<iostream>
#include<vector>
#include "limits.h"

using namespace std;

 int findfirstrepeating(int arr[] , int n)
{
    // // brute force approach
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i+1 ; j<n ;j++)
    //     {
    //         if(arr[i] == arr[j])return arr[i];
    //     }
    // }
    // return -1;
     // t.c -> of above is o(n sq)
     // s.c -> o(1)



     // optimised solution

    //  unordered_map<int , int>hash;
    // isme return kya krna hai 
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i] > max)
        {
            max=arr[i];
        }
    }

  vector<int>hash(max);

for(int i=0;i<n;i++)
{
    hash[arr[i]]++;
}

    for(int i=0 ;i<n;i++)
    {
        if(hash[arr[i]] > 1)
        {
           return i +1 ;

        }
        
    }
return -1;
}




int main(){


int arr[7]={1,2,3,4,5,5,7};
int n=7;

int ans=findfirstrepeating(arr,n);

cout<<ans<<endl;



return 0;
}