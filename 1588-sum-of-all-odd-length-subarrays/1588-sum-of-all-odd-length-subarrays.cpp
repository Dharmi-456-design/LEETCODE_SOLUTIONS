class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans = 0;
        int n = arr.size();

         for(int len = 1;len <= n; len += 2){
            int sum = 0;

            for(int i = 0; i<len;i++)
            sum += arr[i];

            ans += sum;

            for(int i = len;i<n;i++){
                sum = sum -arr[i-len]+arr[i];
                ans += sum;
            }

            
         }
         return ans;
    }
};