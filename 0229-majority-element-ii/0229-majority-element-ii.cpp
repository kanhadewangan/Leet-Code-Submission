class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>ans;
        int threshold = nums.size()/3;
        for(int i =0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto p:mp){
            if(p.second>threshold){
                ans.push_back(p.first);
            }
        }
        return sort(ans.begin(), ans.end()),ans;
        
    }
};