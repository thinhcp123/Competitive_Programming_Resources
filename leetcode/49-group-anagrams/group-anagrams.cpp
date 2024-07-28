class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;

        for(auto x : strs){
            string word = x;
            sort(word.begin(),word.end());
            mp[word].push_back(x);
        }

        vector<vector<string>> answer;
        for(auto i : mp){
            answer.push_back(i.second);
        }
        return answer;
        
    }
};