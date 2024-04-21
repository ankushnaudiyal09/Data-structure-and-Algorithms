#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

void rowmaxone(int arr[][4] , int row , int col)
{
    vector<int>ans;
    // one count will store max no. of 1's in a row 
    int onecount=INT_MIN;

    // row no will store index of max no. of 1's wali row 
    int rowno=-1;

    for(int i=0;i<row;i++)
    {
        int count =0;
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==1)
            {
                count++;
            }
        }
        if(count>onecount)
        {
            onecount=count;
            rowno=i;
        }
        
    }

ans.push_back(rowno);
ans.push_back(onecount);

for(int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<" ";
}cout<<endl;


}


int main(){


int arr[5][4]={
    {1,1,1,0},
    {0,1,1,0},
    {0,1,1,0},
    {1,0,0,0},
    {0,0,1,0}
};

int row=5;
int col=4;

rowmaxone(arr,row,col);


return 0;
}