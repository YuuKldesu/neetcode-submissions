class Solution {
public:
    int trap(vector<int>& height) {
        int lt = 0, rt = height.size() - 1;
        int lh = 0, rh = 0, ans = 0;
        while(lt <= rt){
            lh = max(lh, height[lt]);
            rh = max(rh, height[rt]);
            if(lh < rh){
                ans += lh - height[lt];
                ++lt;
            }
            else{
                ans += rh - height[rt];
                --rt;
            }
        }
        return ans;
    }
};
