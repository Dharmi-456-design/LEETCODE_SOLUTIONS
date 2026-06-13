class Solution {
public:
    vector<string> commonChars(vector<string>& words) {

        string s = words[0];
        vector<string> str;

        for(char c : s) {

            bool found = true;

            for(int i = 1; i < words.size(); i++) {

                int ind = words[i].find(c);

                if(ind == -1) {
                    found = false;
                    break;
                }

                words[i].erase(ind, 1);
            }

            if(found) {
                str.push_back(string(1, c));
            }
        }

        return str;
    }
};
