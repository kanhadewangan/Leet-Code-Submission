class Solution {
public:
    int maxProduct(vector<int>& nums) {
    int currMax = nums[0];
    int currMin = nums[0];
    int ans = nums[0];
    for(int i=1; i<nums.size(); i++){
        int preMax = currMax;
        int preMin = currMin;
        currMax = max({nums[i], preMax*nums[i], preMin*nums[i]});
        currMin = min({nums[i], preMax*nums[i], preMin*nums[i]});
        ans = max(ans, currMax);
    }
    return ans;
    }
};