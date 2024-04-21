#include<iostream>
#include<vector>
using namespace std;


vector<int> spiralmatrix(vector<vector<int>>&arr)
{
    vector<int>ans;
    int m= arr.size();
    int n=arr[0].size();

    int startingcol=0;
    int endingcol=n-1;
    int endingrow=m-1;
    int startingrow=0;

    int total_element=m*n;
    int count=0;
    while(count < total_element)
    {
        // print starting ka row
        for(int i=startingrow;i<=endingcol && count< total_element;i++)
        {
            ans.push_back( arr[startingrow][i]);
            count++;
        }
        startingrow++;

        // print ending col
        for(int i=startingrow;i<=endingrow && count< total_element;i++)
        {
            ans.push_back(arr[i][endingcol]);
            count++;
        }
        endingcol--;

        // print ending row
        for(int i=endingcol;i>=startingcol && count< total_element;i--)
        {
            ans.push_back(arr[endingrow][i]);
            count++;
        }
        endingrow--;

        // print starting col

        for(int i=endingrow;i>=startingrow && count< total_element;i--)
        {
            ans.push_back(arr[endingrow][startingcol]);
            count++;
        }
        startingcol++;
        
    }
    return ans;

}


int main(){


 vector<vector<int>>arr={
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
 };

vector<int>ans= spiralmatrix(arr);

for(int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<" ";
}


return 0;
}