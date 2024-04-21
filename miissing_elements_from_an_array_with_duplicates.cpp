#include<iostream>
using namespace std;

void missingnumber(int arr[] , int n)
{
    // sorting + swapping approach

    // sort

    int i=0;
    while(i<n)
    {
        int index=arr[i]-1;
        if(arr[i] != arr[index])
        {
            swap(arr[i] , arr[index]);
        }
        else
        {
            i++;
        }
    }

   
 // check whose index is not matching  there value , index is done from 1 not 0;

    for(int i=0;i<n;i++)
    {
        if(arr[i] != i+1)
        {
            cout<<i+1<<" ";
        }

    }
cout<<endl;


}

int main(){

int arr[]={3,3,3,3,3};
//int arr[]={5,3,3,3,1};
int n=5;

missingnumber(arr,n);


return 0;
}