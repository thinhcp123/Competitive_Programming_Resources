class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
       unordered_set<int> seen;
       unordered_map<int, int> lossesCount;

       for(auto &match : matches){
         int win = match[0] , lost = match[1];
         seen.insert(win);
         seen.insert(lost);
         lossesCount[lost]++;
       }

       vector<vector<int>> ans(2,vector<int>());
       for(auto player : seen){
        if(lossesCount.find(player) == lossesCount.end()){
            ans[0].push_back(player);
        }else if(lossesCount[player] == 1){
            ans[1].push_back(player);
        }
       }

       sort(ans[0].begin(),ans[0].end());
       sort(ans[1].begin(),ans[1].end());
       return ans;
    }
};