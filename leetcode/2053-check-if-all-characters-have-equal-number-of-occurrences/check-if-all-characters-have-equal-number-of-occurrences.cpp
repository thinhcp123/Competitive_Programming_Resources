class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> mp;

        for(auto &x : s){
            mp[x]++;
        }
        
        unordered_set<int> st;
        for(auto [key,val]: mp){
            st.insert(val);
        }

        return st.size() == 1;
    }
};