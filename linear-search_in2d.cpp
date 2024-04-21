#include<iostream>
using namespace std;

bool searchtarget(int arr[][3] , int row , int col , int target)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}


int main(){


int arr[3][3] = { {1,2,3}, {4,5,6}, {7,8,9}};
int target;
int row=3;
int col=3;
cout<<"enter the target : ";
cin>>target;
cout<<"found or not : "<<searchtarget(arr,row,col,target);


return 0;
}