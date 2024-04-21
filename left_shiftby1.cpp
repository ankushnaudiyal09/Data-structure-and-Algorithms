#include<iostream>
using namespace std;

void leftshift(int arr[] , int n)
{
    // step 1 -> store arr[0] in temp
    int temp=arr[0];

    // step 2 -> ascending to descending  loop for replace arr[i] = arr[i=1]

    for(int i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }

    // step -> 3 make arr[n-1]=temp;
    arr[n-1]=temp;
}

int main(){


int arr[4]={10,20,30,40};
int n=4;

leftshift(arr,n);

// print 

for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" "<<endl;
}


return 0;
}