#include<iostream>
using namespace std;

void colwisesum(int arr[][4] , int row , int col)
{
    for(int i=0;i<col;i++)
    {
        int sum=0;
        for(int j=0;j<row;j++)
        {
            sum+=arr[j][i];
        }
        cout<<"sum of "<<i+1<<" col is : "<<sum<<endl;
    }
}


int main(){


int arr[3][4]= { {10,20,5,7}, {2,4,6,8}, {10,15,15,10} };
int row=3;
int col=4;

colwisesum(arr,row,col);

return 0;
}