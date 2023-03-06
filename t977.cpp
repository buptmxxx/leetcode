#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> nums = {-4,-1,0,3,10};
    int slow = 0;
    int fast = nums.size()-1;
    cout<<nums[fast]<<" ";
    cout<<nums[slow]<<" ";
    vector<int> a(nums);
    for(int i = 0;i<nums.size();i++){
        // cout<<nums[fast]<<" ";
        // cout<<nums[slow]<<" ";
        if(nums[slow]*nums[slow]>=nums[fast]*nums[fast]){
            cout<<nums[fast]<<" ";
            cout<<nums[slow]<<" ";
            cout<<nums[slow]*nums[slow]<<" ";
            a[i] = nums[fast]*nums[fast];
            fast--;
        }
        else{
            a[i] = nums[slow]*nums[slow];
            slow++;
        }
    }
    for(int i = 0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
