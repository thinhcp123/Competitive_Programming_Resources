class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sLeft = 0;
        int sRight = 0;
        while(sLeft < s.size() && sRight < t.size()){
            if(s[sLeft] == t[sRight]){
                sLeft++;
            }
            sRight++;
        }
        return sLeft == s.size();

    }
};