#include<iostream>
using namespace std;

void rowwisesum(int arr[][4] , int row , int col)
{
    for(int i=0;i<row;i++)
    {
        int sum=0;
        for(int j=0;j<col;j++)
        {
            
            sum=sum+arr[i][j];
             
        }
       cout<<"sum of "<<i+1<<" row is : "<<sum<<endl;
    }
}



int main(){


int arr[3][4]= { {10,20,5,7}, {2,4,6,8}, {10,15,15,10} };
int row=3;
int col=4;

rowwisesum(arr,row,col);


return 0;
}