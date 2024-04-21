#include<iostream>
using namespace std;

void diagonalwisesum(int arr[][4] , int row , int col )
{
    int sum=0;
    for(int i=0;i<row;i++)
    {
        sum=sum+arr[i][i];
    }
    cout<<"sum is : "<<sum<<endl;
    
}


int main(){


int arr[4][4] = {
    {10,20,30,40},
    {50,60,70,80},
    {10,20,30,40},
    {50,60,70,80}
};

int row=4;
int col=4;

diagonalwisesum(arr,row,col);



return 0;
}