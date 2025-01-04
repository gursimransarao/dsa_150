
#include <bits/stdc++.h>
using namespace std;

// Approaches
// Brute Force Approach
// Sorting Approach
// Hash Map Approach
// Boyer-Moore Voting Algorithm

class solution
{
public:
    // Approach one

    // Brute Force
    int majorityElement_BF(vector<int> &nums)
    {

        int n = nums.size();

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            count = 0;
            for (int j = 0; j < n; j++)
            {
                if (nums[i] == nums[j])
                {
                    count++;
                }
            }

            if (count > n / 2)
            {
                return nums[i];
            }
        }

        return -1;
    }

    //     Time and Space Complexity
    // Time Complexity: O(n^2), where n is the number of elements in the array.
    // Space Complexity: O(1), no extra space used.

    //***************************************************************************************** */

    // Sorting approach

    int majorityElement_sorting(vector<int> &nums)
    {

        int n = nums.size();

        sort(nums.begin(), nums.end());

        return nums[n / 2];
    }

    //     Time and Space Complexity
    // Time Complexity: O(n log n), due to the sorting operation.
    // Space Complexity: O(1), if we disregard the space used by the internal sorting algorithm.

    //****************************************************************************************** */

    // Hashmap approach

    int majorityElement_HM(vector<int> &nums)
    {

        unordered_map<int, int> umap;

        for (int i = 0; i < nums.size(); i++)
        {

            umap[nums[i]]++;

            if (umap[nums[i]] > nums.size() / 2)
            {
                return nums[i];
            }
        }

        return -1;
    }

    //     Time and Space Complexity
    // Time Complexity: O(n), where n is the number of elements in the array.
    // Space Complexity: O(n), for storing frequencies in the hash map.

    //****************************************************************************************** */

    // Boyer-Moore Voting Algorithm

    int majorityElement_BM(vector<int> &nums)
    {
        int count = 0;
        int candidate;

        for (int num : nums)
        {
            // Reset the candidate when count is 0
            if (count == 0)
            {
                candidate = num;
            }

            if (candidate == num)
            {
                count++;
            }
            else
            {
                count--;
            }
        }

        return candidate;
    }

    //     Time and Space Complexity
    // Time Complexity: O(n), going through the array once to determine the majority element.
    // Space Complexity: O(1), constant space used.
};

int main()
{

    return 0;
}