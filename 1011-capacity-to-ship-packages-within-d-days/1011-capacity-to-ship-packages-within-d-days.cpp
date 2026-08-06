class Solution {
public:
    bool isPossible(vector<int>& weights,  int mid , int days){
        int cnt = 1;
        int sum =0;
        for(int i:weights){
            sum+=i;
            if(sum>mid){
                cnt++;
                sum = i;
            }
        }
        return cnt<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(), weights.end());
        int r = accumulate(weights.begin(), weights.end(),0);
        int ans = r;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(isPossible(weights,mid, days)){
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