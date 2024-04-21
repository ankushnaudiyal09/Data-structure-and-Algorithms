#include<iostream>
#include<vector>
using namespace std;


void rotatearray(int arr[], int n, int k)
{
    // make additional array
    int ans[10];

for(int index=0;index<n;index++)
{
    int newindex=(index+k)%n;
    ans[newindex]=arr[index];
}

for(int i=0;i<n;i++)
{
    arr[i]=ans[i];
}


}

int main(){


int arr[6]={10,20,30,40,50,60};
int n=6;

cout<<"enter the value of k : ";
int k;
cin>>k;

rotatearray(arr,n,k);

// print array

for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}cout<<endl;

return 0;
}