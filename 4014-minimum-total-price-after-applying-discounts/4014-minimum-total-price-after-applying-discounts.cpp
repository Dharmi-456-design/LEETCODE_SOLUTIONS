class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        double ans = 0;
        sort(prices.rbegin(),prices.rend());
        sort(discounts.rbegin(),discounts.rend());
        int n = prices.size();
        int m = discounts.size();
        for(int i=0;i<n;i++){
            if(i<m){
                double final = prices[i]*(100.0-discounts[i])/100.0;
                ans += final;
            }
            else{
                ans += prices[i];
            }
        }
        return ans;
    }
};