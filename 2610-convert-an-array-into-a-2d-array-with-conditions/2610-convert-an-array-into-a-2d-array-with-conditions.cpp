class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {

        vector<vector<int>> result;
        unordered_map<int, int> freq;

        for(int val : nums) {
            freq[val]++;
        }

    
        for(auto &it : freq) {

            int v = it.first;
            int count = it.second;

            for(int i = 0; i < count; i++) {

            
            if(i >= result.size()){
                result.push_back({});
            }
                
                result[i].push_back(v);
            }
        }

        return result;
    }
};
