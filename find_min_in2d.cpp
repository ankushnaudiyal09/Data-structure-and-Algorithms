#include<iostream>
#include<limits.h>
using namespace std;

int findmin(int arr[][3] , int row ,int col)
{
    int minans=INT_MAX;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j] < minans)
            {
                minans=arr[i][j];
            }
        }
    }
    return minans;
}



int main(){



int arr[3][3] =  { {11,2,-3}, {4,5,6}, {7,8,9}};
int row=3;
int col=3;

cout<<"minimum number is : "<<findmin(arr,row,col)<<endl;




return 0;
}