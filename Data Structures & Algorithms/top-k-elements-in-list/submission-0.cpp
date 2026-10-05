class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> cnt;
        for(int n : nums){
            ++cnt[n];
        }
        vector<pair<int,int>> freq;
        for(auto& pair : cnt){
            freq.push_back(pair);
        }
        sort(freq.begin(), freq.end(), [](auto& a, auto& b){
            return a.second > b.second;
        });
        vector<int> ans;
        for(int i = 0; i < k; ++i){
            ans.push_back(freq[i].first);
        }
        return ans;
    }
};
