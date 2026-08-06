class Solution {
public:

    bool isPossible(vector<int>& bloomDay, int m, int k, int mid){
        int count =0;
        int bouquet = 0;
        for(int i :bloomDay){
            if(i<=mid){
                count++;
            }
            else {
                count = 0;
            }
            if(count ==k){
                bouquet++;
                count =0;
            }
        }
        return bouquet>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long )m*k> bloomDay.size()) return -1;

        int l = *min_element(bloomDay.begin(), bloomDay.end());
        int r = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = r;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(isPossible(bloomDay, m , k , mid)){
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