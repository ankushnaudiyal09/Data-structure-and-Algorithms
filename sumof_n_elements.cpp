#include<iostream>
using namespace std;
int main(){

int arr[5];
int n =5;

for(int i=0;i<n;i++)
{
    cout<<"enter number : ";
    cin>>arr[i];
}

int sum=0;

for(int i=0;i<n;i++)
{
   sum=arr[i]+sum;
}

cout<<"sum of array is : "<<sum<<endl;


return 0;
}