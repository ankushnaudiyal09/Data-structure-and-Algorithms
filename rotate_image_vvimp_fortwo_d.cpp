#include<iostream>
using namespace std;

void rotateimage(int arr[][3] , int row , int col)
{
    // transpose
    for(int i=0;i<row;i++)
    {
        // catch tha ki kyu humne j ko i se intiliaze kra 
        for(int j=i;j<col;j++)
        {
            swap(arr[i][j] , arr[j][i]);
        }
    }

    // reverse karna hai hr row ko 
    for(int i=0;i<row;i++)
    {
        int start=0;
        int end=col-1;
        while(start<=end)
        {
            swap(arr[i][start] , arr[i][end]);
            start++;
            end--;
        }
    }

    // ek or tareeka hai better time complexity ke liye or understandability ke liye 
    // usme vector se saari cheeje chalegi jese isme array leke chal rahe hai 
    // transpose karne ka tareeka yahi hoga 
    // reverse karne ke liye usme reverse keyword ka use ho jayega 
    // leetcode pr kara hua hai 
    

}

int main(){


int arr[3][3]={
    {1,2,3},
    {4,5,6},
    {7,8,9}
};

int row=3;
int col=3;

rotateimage(arr,row,col);

// print

for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
{
    cout<<arr[i][j]<<" ";
}
cout<<endl;
}




return 0;
}