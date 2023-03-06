#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(int argc, char const *argv[])
{
    unordered_map<int,int> m;
    vector<int>nums = {1,2,3,2,2};
    int right = 0;
    int left = 0;
    int res = 0;
    for(;right<nums.size();right++){
        m[nums[right]]++;
        while (m.size()>2)
        {
            m[nums[left]]--;
            if(m[nums[left]]==0){
                m.erase(nums[left]);
            }
            left++;
        }
        res = max(res,right-left+1);        
    }
    return res;
}
