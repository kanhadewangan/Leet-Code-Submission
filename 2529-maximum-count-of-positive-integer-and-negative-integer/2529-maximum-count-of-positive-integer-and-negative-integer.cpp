class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos=0, neg=0,maxi=INT_MIN;
        for(int i =0; i<nums.size(); i++){
            if(nums[i]>0){
                pos++;
            }
            if(nums[i]<0){
                neg++;
            }
            if(nums[i]==0){
                continue;
            }
        }
        maxi = max(maxi, max(pos,neg));
        return maxi;
        
    }
};