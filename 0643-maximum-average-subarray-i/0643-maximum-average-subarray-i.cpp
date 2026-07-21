class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int sum = 0, maxSum = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            if (i >= k)
                sum -= nums[i - k];

            if (i >= k - 1)
                maxSum = max(maxSum, sum);
        }

        return (double)maxSum / k;
    }
};