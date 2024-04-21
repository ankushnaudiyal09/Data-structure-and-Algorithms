#include<iostream>
using namespace std;

int findmissing(int arr[] , int size,int n)
{
    int sum=0;
    for(int index=0;index<size;index++)
    {
        sum+=arr[index];
    }
    int totalsum= ( (n) * (n+1))/2 ;
    int ans=totalsum-sum;
    return ans;

}

int main(){


int arr[7]={1,2,4,8,7,3,5};
int n=8;
int size=7;

int ans=findmissing(arr,size,n);

cout<<"missing number is : "<<ans<<endl;

return 0;
}