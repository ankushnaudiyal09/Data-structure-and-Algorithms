#include<iostream>
using namespace std;

void countzeroone(int arr[] , int size)
{

int zero =0;
int one=0;

for(int i=0;i<size;i++)
{
    if(arr[i]==0)
    {
        zero++;
    }
    else if(arr[i]==1)
    {
        one++;
    }
}

cout<<"total zero is : "<<zero<<endl;

cout<<"totaL one is : "<<one <<endl;

}


int main(){

int arr[]={0,0,1,1,1,1,0,0,1,1};

// zero -> 5
// one -> 6 

int size = 10;


countzeroone(arr, size);



return 0;
}