#include<iostream>
using namespace std;


void reversearray(int arr[] , int size)

{

int i=0;
int j=size-1;

while(i<=j)
{
    swap(arr[i] , arr[j]);
    i++;
    j--;
}

for(int i=0;i<size;i++)
{
    cout<<arr[i]<<" ";
}


}


int main(){


int arr[]={10,20,30,40,50,60,70};

int size=7;

reversearray(arr,size);

// isi algo se even or odd dono array swap ho jayenge 




return 0;
}