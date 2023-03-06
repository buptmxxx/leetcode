#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
            // 1. 初始化一个哈希表来记录窗口内水果的种类和数量
        vector<int>fruits = {1,1,0,2,1};
        unordered_map<int, int> hash;

        // 2. 初始化指针
        int left = 0, right = 0, n = fruits.size(), ret = 0;

        // 3. 当 right < n 时，一直循环
        while (right < n)
        {
            // 把当前元素扔进哈希表中
            hash[fruits[right]]++;

            // 判断当前元素进来后，是否还满足两种水果
            // 如果不满足，依次将最左侧元素划出窗口，直到里面剩下两种水果
            while (hash.size() > 2)
            {
                // 左侧元素滑出窗口
                hash[fruits[left]]--;

                // 如果划出去之后变成 0，说明这个元素就该被删掉
                if (hash[fruits[left]] == 0)
                {
                    hash.erase(fruits[left]);
                }

                // left 指向下一个元素
                left++;
            }

            // 此时窗口内元素就是满足条件的，更新 ret
            ret = max(ret, right - left + 1);

            // 让下一个元素进入窗口
            right++;
        }

        // 返回结果
        return ret;
    return 0;
}
