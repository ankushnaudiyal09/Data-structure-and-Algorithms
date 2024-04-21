
#include<iostream>
using namespace std;

void extreme(int arr[] , int size)
{

// ye function kya karega pehele 0 index ko print krega fir n-1 index ko 
// fir 1 index ko fir n-2 index ko

int left=0;
int right=size-1;

while(left<=right)
{
    // odd case mai 2 barr ek hi number print na ho jaye isliye condition lagai hai 

if(left==right)
{
    cout<<arr[left]<<endl;
}
else
{
    cout<<arr[left]<<endl;
    cout<<arr[right]<<endl;
}

left++;
right--;


}



}

int main(){


int arr[]={10,20,30,40,50,60};

int size=6;

extreme(arr,size);


return 0;
}