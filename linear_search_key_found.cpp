#include<iostream>
using namespace std;
int main(){


int arr[5];

int n=5;

for(int i=0;i<n;i++)
{
    cout<<"enter number : ";
    cin>>arr[i];
}

cout<<"enter the target element : ";
int target;
cin>>target;

bool flag=0;

for(int i=0;i<n;i++)
{
    if(arr[i]==target)
    {
        //found 
        flag=1;
        break;
    }
}
 
if(flag==1)
{
cout<<"found "<<endl;
}
else
{
    cout<<"not found ! "<<endl;
}



return 0;
}