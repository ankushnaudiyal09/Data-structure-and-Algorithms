#include<iostream>
using namespace std;

double slidingwindow(int arr[] , int k , int size)
{

int i=0 , j=k-1;
        int sum=0;
        for(int y=i;y<=j;y++)
        sum+=arr[y];
        int maxsum= sum;
        j++;

        while(j<size)
        {
            sum = sum - arr[i++];
            sum = sum+= arr[j++];

            maxsum = max (maxsum , sum); 
        }
        double maxavg = maxsum / (double) k;
        return maxavg;

}

int main(){


int arr[6]={1,12,-5,-6,50,3};
int k=4;
int size= 6;

double ans = slidingwindow(arr,k,size);

cout<<ans<<endl;


return 0;
}