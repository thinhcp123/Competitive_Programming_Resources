class Solution {
public:
    int missingNumber(vector<int>& nums) {
       set<int> se;
        int expectedNumCount = nums.size()+1;
       for(auto &c:nums){
         se.insert(c);
       }
       for(int number = 0; number < expectedNumCount; number++){
        if(!se.count(number)){
            return number;
        }

       }
       return -1;

    }
};