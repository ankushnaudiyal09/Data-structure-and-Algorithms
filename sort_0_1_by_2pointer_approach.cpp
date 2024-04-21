#include<iostream>
using namespace std;


void twopointerapproach(int arr[] , int n)
{
    int l=0;
    int h=n-1;

    while(l<h)
    {
        if(arr[l]==0)
        {
            l++;
        }
        else if(arr[h]==1)
        {
            h--;
        }
        else{
                // varna swap krdo
        swap(arr[l++] , arr[h--]);

        }
    

    }
}


int main(){


int arr[]={0,1,0,1,0,0,1,1,1,0};
int n=10;


twopointerapproach(arr,n);

// print array
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" "<<endl;
}



return 0;
}