class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& n1, vector<int>& n2) {
        
        vector<int>ans;
       for(int i = 0; i<n1.size(); i++){
        int index = -1;

        for(int j = 0; n2.size(); j++){
            if(n2[j]==n1[i]){
                index  = j;
                break;
            }
        }

        int greater = -1;
        for(int j = index+1; j <n2.size(); j++){
            if(n2[j]>n1[i]){
                greater = n2[j];
                break;
            }
        }
        ans.push_back(greater);

       }
           return ans; 
        
    }
};