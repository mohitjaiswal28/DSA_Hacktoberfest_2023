
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum1(vector<int>& nums, int target) {

        // Brute force -> O(n2) -> Inner Loops 
        // For both variety
        vector<int> v;

        for(int i=0; i<nums.size(); i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                if(i==j) continue;
                if(nums[i] + nums[j] == target)
                {
                    v.push_back(i);
                    v.push_back(j);
                }
            }
        }      

        return v;
    }

    // vector<int> twoSum2(vector<int>& nums, int target) {

    //     // Optimal -> Two pointers -> O(n) + O(nlogn)
    //     // For variety 1 only
    //     // sorted

    //     int l = 0;
    //     int r = nums.end();     // or n-1
    //     int sum = 0;

    //     while(l<r)
    //     {
    //         sum = nums[l] + nums[r];
                    
    //         if(sum == target)
    //         {
    //             // l, h can be also returned
    //             return true;
    //         }

    //         else if(sum < target)
    //             l++;

    //         else
    //             r--;
    //     }

    //     return false;
    // }
};

int main()
{
    Solution s;

    vector<int> a{3, 5, 2, -4, 8, 11};
    vector<int> answer;
    int sum = 7;

    answer = s.twoSum1(a, sum);
    for(int i=0; i<answer.size(); i++)
        cout<<answer[i]<<" ";
}
