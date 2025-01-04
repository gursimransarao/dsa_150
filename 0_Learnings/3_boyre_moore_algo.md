# Boyer-Moore Voting Algorithm

**Time Complexity**: O(n)  
**Space Complexity**: O(1)

The algorithm is beautifully simple and works in O(n) time with O(1) space complexity. Here's how it works:

## Core Steps

1. **We use two variables**:

   - A candidate element
   - A count to track the "votes"

2. **We iterate through the array once**:

   - If count is 0, we pick the current element as our candidate
   - If we see the candidate again, we increment count
   - If we see a different element, we decrement count

3. **The key insight**:

   - If a majority element exists, it will survive this "voting" process
   - This becomes our final candidate

4. **Verification step** (if needed):

   - Make a second pass through the array
   - Count the actual occurrences of the candidate
   - Verify if it appears more than n/2 times
   - This step is only needed if we're not guaranteed a majority element exists

5. **Correctness proof**:
   - Every non-majority element can at most cancel out one majority element
   - Since majority element appears > n/2 times, it can't be completely cancelled
   - Therefore, the last surviving candidate must be the majority element
