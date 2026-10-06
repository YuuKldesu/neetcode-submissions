class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        for(char c : s){
            if(isalnum(c)) temp += tolower(c);
        }

        int lf = 0, rt = temp.length() - 1;
        while(lf < rt){
            if(temp[lf++] != temp[rt--]) return false;
        }
        return true;
    }
};
