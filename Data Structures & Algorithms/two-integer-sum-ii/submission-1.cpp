class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int lf = 0, rt = numbers.size() - 1;
        while(lf < rt){
            if(numbers[lf] + numbers[rt] == target) return {lf + 1, rt + 1};
            if(numbers[lf] + numbers[rt] > target) --rt;
            if(numbers[lf] + numbers[rt] < target) ++lf;
        }
        return {};
    }
};
