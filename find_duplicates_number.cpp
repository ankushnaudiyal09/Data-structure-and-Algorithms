#include<iostream>
#include<vector>
using namespace std;


int findDuplicate(vector<int>& nums) {
        
// // sorting approach
// sort(nums.begin() , nums.end());

// for(int i=0;i<nums.size()-1;i++)
// {
//     if(nums[i] ==nums[i+1] )
//     return nums[i];
// }
// return -1;


// // method 2 -> negative marking approach
// int ans=-1;
// for(int i=0;i<nums.size();i++)
// {
//     int index=abs(nums[i]);

//     // already visited
//     if(nums[index] < 0)
//     {
//         ans=index;
        
//         break;
        
//     }
//     nums[index] *= -1;
// }
// return ans;
//     }


// method 3 -> positioning method
while(nums[0] != nums[nums[0]] )
{
    swap(nums[0] , nums[nums[0]]);
}
return nums[0];
    }



int main(){



vector<int>nums;

nums.push_back(1);
nums.push_back(3);
nums.push_back(2);
nums.push_back(3);
nums.push_back(4);

int ans=findDuplicate(nums);

cout<<ans<<endl;
return 0;
}