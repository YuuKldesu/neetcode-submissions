class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hashSet;
        for(int n : nums){
            hashSet.insert(n);
        }
        int ans = 0;
        for(int n : nums){
            if(hashSet.count(n - 1))continue;
            int temp = 0;
            while(hashSet.count(n++)){
                ans = max(ans, ++temp);
            }
        }
        return ans;
    }
};
