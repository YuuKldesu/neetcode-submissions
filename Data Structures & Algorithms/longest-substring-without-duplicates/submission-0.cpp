class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0;
        int ans = 0;
        unordered_set<char> hashSet;
        while(r < s.size()){
            while(hashSet.count(s[r])){
                hashSet.erase(s[l]);
                ++l;
            }
            hashSet.insert(s[r]);
            ans = max(ans, r - l + 1);
            ++r;
        }
        return ans;
    }
};
