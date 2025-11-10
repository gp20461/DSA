


vector<int> searchRange(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;
    vector<int> vec;
    int fPos = firstPos(low, high, nums, target);  // First (leftmost)
    vec.push_back(fPos);
    int lPos = lastPos(low, high, nums, target);   // Last (rightmost)
    vec.push_back(lPos);
    return vec;
}


int firstPos(int low, int high, vector<int>& nums, int target) {
    int res = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            res = mid;
            high = mid - 1; // Look left for first
        } else if (nums[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return res;
}
int lastPos(int low, int high, vector<int>& nums, int target) {
    int res = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            res = mid;
            low = mid + 1; // Look right for last
        } else if (nums[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return res;
}
