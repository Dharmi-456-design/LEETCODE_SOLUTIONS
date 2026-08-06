class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;i<=n+t;i++){
            int num = i;
            int pdt = 1;
            while(num>0){
              pdt *= (num%10);
              num /= 10;
            }
            if(pdt%t==0){
                return i;
            }
        }
        return -1;
    }
};