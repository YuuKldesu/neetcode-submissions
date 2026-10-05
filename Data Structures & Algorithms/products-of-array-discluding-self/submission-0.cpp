class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        int cnt = 0;
        for(int n : nums){
            if(n == 0){
                ++cnt;
                continue;
            }
            prod *= n;
        }
        vector<int> ans(nums.size());
        if(cnt > 1)return ans;
        if(cnt == 1){
            for(int i = 0; i < nums.size(); ++i){
                if(nums[i] != 0)continue;
                ans[i] = prod;
                break;
            }
        }
        if(cnt == 0){
            for(int i = 0; i < nums.size(); ++i){
                ans[i] = prod / nums[i];
            }
        }
        return ans;
    }
};
