class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> cnt;
        for(int n : nums){
            ++cnt[n];
        }
        vector<vector<int>> bucket(nums.size() + 1);
        for(const auto& pair : cnt){
            bucket[pair.second].push_back(pair.first);
        }
        vector<int> ans;
        for(int i = nums.size(); i >= 0; --i){
            for(int n : bucket[i]){
                ans.push_back(n);
                if(ans.size() == k) return ans;
            }
        }
        return ans;
    }
};
