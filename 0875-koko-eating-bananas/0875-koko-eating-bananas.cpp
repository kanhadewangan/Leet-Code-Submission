class Solution {
public:
   long long minTime(vector<int>& nums, int speed) {
    long long hours = 0;
    for (int bananas : nums) {
        hours += ceil((bananas + speed - 1LL) / speed);
    }
    return hours;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int l =1;
        int r = *max_element(piles.begin(), piles.end());
        int ans = r;
        while(l<=r){
            int mid = l +(r-l)/2;
            long long time = minTime(piles, mid);
            if(time<=h){
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