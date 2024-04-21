#include<iostream>
using namespace std;
int main(){

int arr[10];

int total=10;

for(int i=0;i<total;i++)
{
    cout<<"enter numbers : ";
    cin>>arr[i];
}

for(int i=0;i<total;i++)
{

cout<<2*arr[i]<<endl;

}


return 0;
}