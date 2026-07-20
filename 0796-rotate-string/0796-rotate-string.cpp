class Solution {
public:
    bool rotateString(string s, string goal) {
        //rotate means first letter goes to end
        //first one by one check and rotation then after goal= true otherwise return false

        if(s == goal)
        return true;

        for(int i = 0; i<s.size(); i++){
            char ch = s[0]; //first check
            s.erase(0,1); //use for erase
            s.push_back(ch); // use for add
            if(s==goal) // s->goal return true; otherwise false
                return true;
        }
            return false;


        


    }
};