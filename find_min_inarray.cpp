#include<iostream>
#include<limits.h>
using namespace std;


int findmin(int arr[],int size)
{



int min=INT_MAX;
// limits.h   header file include kar lena 

for(int i=0;i<size;i++)
{
    if(arr[i] < min)
    {
        min=arr[i];
    }
}

return min;


}



int main(){


int arr[]={4,7,9,13,1,-5};

int size=6;

int answer= findmin(arr,size);

cout<<"minimum is : "<<answer<<endl;



return 0;
}