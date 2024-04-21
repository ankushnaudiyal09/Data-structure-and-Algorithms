#include<iostream>
using namespace std;


void transposematrix(int arr[][3] , int row , int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=i;j<col;j++)
        {
            swap(arr[i][j] , arr[j][i]);
        }
    }
}

void print(int arr[][3] , int row , int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){


// i/p -> arr { 

    // {2,4,6}
    // {7,9,11}
    // {13,15,19}

// o/p -> arr {

   // {2,7,13}
   // {4,9,15}
   // {6,11,19}

int arr[3][3] = {
    {2,4,6},
    {7,9,11},
    {13,15,19}
};

int row=3;
int col=3;

transposematrix(arr,row,col);
print(arr,row,col);

return 0;
}