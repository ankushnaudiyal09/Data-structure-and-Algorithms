#include<iostream>
#include<string>

using namespace std;


int calsum(int a[] ,int m , int b[] , int n)
{
    int i=m-1;
    int j=n-1;
    string ans;
    int anssize = ans.size();
    int carry=0;

    while(i>=0 && j>=0)
    {
        int x= a[i] + b[j] + carry;
        int digit=x%10;
        ans.push_back(digit+'0');
        carry=x/10;
        i--;
        j--;
    }

 while(i>=0)
    {
        int x= a[i] + 0 + carry;
        int digit=x%10;
        ans.push_back(digit+'0');
        carry=x/10;
        i--;
        
    }

     while( j>=0)
    {
        int x= 0 + b[j] + carry;
        int digit=x%10;
        ans.push_back(digit+'0');
        carry=x/10;
    
        j--;
    }

    if(carry)
    {
        ans.push_back(carry);
    }
    while(ans[anssize-1] == '0')
    {
        ans.popback();
    }
    reverse(ans.begin() , ans.end());


}


int main(){


int a[4]={9,5,4,9};
int b[3]={2,1,4};

int m=4;
int n=3;




vector<int>ans= calsum(a,m,b,n);

for(int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<" ";
}

return 0;
}