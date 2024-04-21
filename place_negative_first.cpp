#include<iostream>
using namespace std;

void negativefirst(int arr[], int n)
{
    // j for storing negative values
    int j=0;
    for(int index=0;index<n;index++)
    {
        if(arr[index]<0)
        {
            swap(arr[index] , arr[j]);
            j++;
        }
    }
}


int main(){


int arr[7]={-23,-7,10,-12,-11,40,-60};
int n=7;

negativefirst(arr,n);

// print array

for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;

return 0;
}