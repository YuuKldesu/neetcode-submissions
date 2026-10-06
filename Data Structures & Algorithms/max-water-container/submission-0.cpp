class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = 0;
        int lt = 0, rt = heights.size() - 1;
        while(lt < rt){
            int area = 0;
            if(heights[lt] < heights[rt]){
                area = heights[lt] * (rt - lt);
                ++lt;
            }
            else{
                area = heights[rt] * (rt - lt);
                --rt;
            }
            ans = max(ans, area);
        }
        return ans;
    }
};
