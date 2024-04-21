#include<iostream>
using namespace std;

void rotatearray(int arr[] , int n,int k)
{
    // store rotation part in an temp array
    int temp[2];
    temp[0]=arr[n-k];
    temp[1]=arr[(n+1)-k];

    int i=n-1;
    while(i>=(n-1)-k)
    {
        arr[i]=arr[i-k];
        i--;
    }

    arr[0]=temp[0];
    arr[1]=temp[1];

}

int main(){



int arr[6]={10,20,30,40,50,60};
int n=6;
// cout<<"enter the value of k : ";
// cin>>k;

rotatearray(arr,n,2);

// print array

for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}cout<<endl;



return 0;
}