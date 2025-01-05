
#include <bits/stdc++.h>
using namespace std;

// Product of Array Except Self Solution
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size(); // Get size of input array

        // Initialize 3 arrays:
        // ans - for final answer
        // left - to store products of left elements
        // right - to store products of right elements
        vector<int> ans(n);
        vector<int> left(n);
        vector<int> right(n);

        // Base case: nothing on left of first element
        left[0] = 1;

        // Calculate products of all elements to the left of each position
        // For array [1,2,3,4]:
        // left[0] = 1 (base case)
        // left[1] = 1
        // left[2] = 1×2
        // left[3] = 1×2×3
        for (int i = 1; i < n; i++)
        {
            left[i] = left[i - 1] * nums[i - 1];
        }

        // Base case: nothing on right of last element
        right[n - 1] = 1;

        // Calculate products of all elements to the right of each position
        // For array [1,2,3,4]:
        // right[3] = 1 (base case)
        // right[2] = 4
        // right[1] = 4×3
        // right[0] = 4×3×2
        for (int i = n - 2; i >= 0; i--)
        {
            right[i] = right[i + 1] * nums[i + 1];
        }

        // For each position, multiply left and right products
        // This gives product of all elements except self
        // ans[i] = (product of all left) × (product of all right)
        for (int i = 0; i < n; i++)
        {
            ans[i] = left[i] * right[i];
        }

        return ans;
    }
};

/*
Time Complexity: O(n) - Three passes through array
Space Complexity: O(n) - Three arrays of size n

Example walkthrough for [1,2,3,4]:
1. Left array: [1, 1, 2, 6]
2. Right array: [24, 12, 4, 1]
3. Final answer: [24, 12, 8, 6]

For position i=2 (value 3):
- Left product = 1×2 = 2 (product of elements before 3)
- Right product = 4 = 4 (product of elements after 3)
- Answer = 2×4 = 8 (product of all elements except 3)
*/

int main()
{

    return 0;
}