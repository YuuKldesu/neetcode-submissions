class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i = 0; i < nums.size(); ++i){
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            int lt = i + 1, rt = nums.size() - 1;
            while(lt < rt){
                if(nums[i] + nums[lt] + nums[rt] == 0){
                    ans.push_back({nums[i], nums[lt], nums[rt]});
                    ++lt;--rt;
                    while(lt < rt && nums[lt] == nums[lt - 1]) ++lt;
                    while(lt < rt && nums[rt] == nums[rt + 1]) --rt;
                }
                else if(nums[i] + nums[lt] + nums[rt] > 0) --rt;
                else ++lt;
            }
        }
        return ans;
    }
};
