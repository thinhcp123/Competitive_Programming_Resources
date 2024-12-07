class Solution {
public:
    bool checkIfPangram(string sentence) {
      set<int> se;

      for(auto &x:sentence){
        se.insert(x);
      }
      if(se.size() < 26) return false;
      return true;
    }
};