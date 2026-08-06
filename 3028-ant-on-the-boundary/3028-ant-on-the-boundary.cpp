class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int ans = 0, sum = 0;
        for (int x : nums)
            ans += !(sum += x);
        return ans;
    }
};