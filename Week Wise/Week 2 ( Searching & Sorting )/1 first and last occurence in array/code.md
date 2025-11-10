Intuition

The problem asks to find the first and last index of a target value in a sorted array.

Since the array is sorted, binary search is a good fit for efficient search.

Instead of doing a linear scan, binary search can quickly zero in on the target and find its bounds.

Approach

Perform two separate binary searches:

One for the first occurrence (leftmost position)

One for the last occurrence (rightmost position)

In each binary search:

If you find the target at mid, save the mid index as a possible answer.

Then, continue the search to the left for the first position, or to the right for the last position.

If the target is not found, return -1 for both positions.

Complexity

Time complexity: 
O
(
log
⁡
n
)
O(logn) for each binary search — overall 
O
(
log
⁡
n
)
O(logn).

Space complexity: 
O
(
1
)
O(1) — only a few variables used.

Code Overview

searchRange calls two helper functions: firstPos and lastPos.

firstPos returns the index of the first occurrence.

lastPos returns the index of the last occurrence.

Both use iterative binary search, shifting the search range as described above.

Results are pushed into a vector and returned as the answer.