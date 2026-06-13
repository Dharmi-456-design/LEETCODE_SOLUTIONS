class Solution {
public:
    string reversePrefix(string word, char ch) {

        int ind = -1;

        for(int i = 0; i < word.size(); i++) {

            if(word[i] == ch) {

                ind = i;
                break;
            }
        }

        if(ind == -1)
            return word;

        int i = 0, j = ind;

        while(i < j) {

            swap(word[i], word[j]);

            i++;
            j--;
        }

        return word;
    }
};