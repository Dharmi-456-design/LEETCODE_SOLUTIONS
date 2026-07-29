class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {

        int one = -1;
        int two = -1;
        int ans = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == 1)
                one = i;

            if (nums[i] == 2)
                two = i;

            if (one != -1 && two != -1)
                ans = min(ans, abs(one - two));
        }

        if (ans == INT_MAX)
            return -1;

        return ans;
    }
};