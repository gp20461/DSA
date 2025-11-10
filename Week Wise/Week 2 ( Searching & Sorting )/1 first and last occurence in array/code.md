# 🔍 First and Last Occurrence in Array

[![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange?style=flat-square)]()
[![Time Complexity: O(log n)](https://img.shields.io/badge/Time%20Complexity-O(log%20n)-blue?style=flat-square)]()
[![Space Complexity: O(1)](https://img.shields.io/badge/Space%20Complexity-O(1)-green?style=flat-square)]()

---

## 💡 Intuition

Given a **sorted array**, you need to find the **first and last index** of a target value. Since the array is sorted, **binary search** is the optimal approach.

✓ Why binary search? It efficiently narrows down the search space in **O(log n)** time.

---

## 🧐 Approach

### Strategy
Perform **two separate binary searches**:
1. **First occurrence** (leftmost position) - search left when found
2. **Last occurrence** (rightmost position) - search right when found

### Key Steps
- Find target at `mid`? Save it and continue searching in that direction
- Target not found? Return [-1, -1]
- This guarantees finding the exact boundaries of the target in the array

---

## ⏱️ Complexity Analysis

| Metric | Value | Details |
|--------|-------|----------|
| **Time** | O(log n) | Two binary searches |
| **Space** | O(1) | Only pointers and variables |

---

## 📋 Code

```cpp
vector<int> searchRange(vector<int>& nums, int target) {
    return {firstPos(nums, target), lastPos(nums, target)};
}

int firstPos(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1, ans = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            ans = mid;
            right = mid - 1;  // search left
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return ans;
}

int lastPos(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1, ans = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            ans = mid;
            left = mid + 1;  // search right
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return ans;
}
```

---

## 💥 Example Walkthrough

**Input:** `nums = [5,7,7,8,8,10]`, `target = 8`

**Execution:**
1. First search finds leftmost 8 at index 3
2. Second search finds rightmost 8 at index 4
3. **Output:** `[3, 4]`

---

## 🌟 Key Insights

✅ **Optimization**: Use `mid + (right - left) / 2` to avoid integer overflow  
✅ **Direction**: Key difference is which side we search after finding target  
✅ **Edge Cases**: Handle arrays with single element, all same values, or target not present

---

## 📖 Related Problems

- Binary Search
- Search in Rotated Sorted Array
- Peak Index in Mountain Array
