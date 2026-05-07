class Solution {
public:
    int countOdds(int low, int high) {
          int total  = high - low + 1;

          int ans = total / 2;
          if(total % 2 == 1 && low % 2 == 1){
            ans++;
          }
          return ans;
    }
};