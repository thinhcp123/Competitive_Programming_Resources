class Solution {
public:
    string reverseOnlyLetters(string s) {
        int left = 0;
        int right = s.size();
        while(left < right){
            if(isalpha(s[left]) && isalpha(s[right])){
                swap(s[left++],s[right--]);
            }
            if(!isalpha(s[left])){
                left++;
            }else if(!isalpha(s[right])){
                right--;
            }
        }
        return s;
    }
};