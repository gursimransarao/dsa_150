//  https://leetcode.com/problems/move-zeroes/description/

//  to note - this problem requires order of non zero values to retain order

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        // Pointer to track the position where the next non-zero element should go
        int lastNonZeroFoundAt = 0;

        // Loop through all elements in the array
        for (int i = 0; i < nums.size(); i++)
        {
            // If the current element is non-zero
            if (nums[i] != 0)
            {
                // Swap the non-zero element with the element at the position of `lastNonZeroFoundAt`
                // This moves the non-zero element to its correct position in the front of the array
                std::swap(nums[lastNonZeroFoundAt], nums[i]);

                // Increment the pointer to indicate the next position for a non-zero element
                lastNonZeroFoundAt++;
            }
            // If the current element is zero, do nothing (it will naturally be pushed to the end)
        }
    }
};

int main()
{

    return 0;
}