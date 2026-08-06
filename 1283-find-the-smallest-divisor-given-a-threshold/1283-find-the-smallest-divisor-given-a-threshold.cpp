class Solution {
public:
     bool isDivisble(vector<int>&nums , int threshold, int mid){
        long long sum =0;
        for(int i:nums){
            sum+= ceil((double)i/mid);
        }
        return sum<=threshold;
     }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l =1;
        int r = *max_element(nums.begin(), nums.end());
        int ans = r;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(isDivisble(nums,  threshold,mid)){
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