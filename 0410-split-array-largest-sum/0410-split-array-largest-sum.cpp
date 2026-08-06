class Solution {
public:
    bool isSplit(vector<int>&nums , int m , int mid)
    {
        int sum =0;
        int cnt =1;
        for(int i :nums){
            sum+=i;
            if(sum>mid){
                cnt++;
                sum = i;
            }
        }
        return cnt<=m;
    }
    int splitArray(vector<int>& nums, int k) {
        int sum = accumulate(nums.begin(), nums.end(),0);
        int maxNum = *max_element(nums.begin(), nums.end());
        int l = maxNum;
        int r = sum;
        int ans = r;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(isSplit(nums, k, mid)){
                ans = mid;
                r = mid-1;
            }
            else {
                l = mid+1;
            }
        }
        return ans;
        
    }
};