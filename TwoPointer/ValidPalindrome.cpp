class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
        for(auto x : s){
            if(isalnum(x))
                s1.push_back(tolower(x));
        }
        for(int i =0 ;i <s1.size()/2; i++){
            if(s1[i]!=s1[s1.size()-1-i])
                return false;
        }
        return true;
    }
};