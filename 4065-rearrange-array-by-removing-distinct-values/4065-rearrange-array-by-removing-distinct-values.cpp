class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
      map<int, int> freq;
      for(int i :nums)
      {
        freq[i]++;
      }
      vector<int>ans;
      while(!freq.empty()){
        vector<int>erase;
        for(auto &[val,cnt]:freq){
            ans.push_back(val);
            cnt--;
            if(cnt==0){
                erase.push_back(val);
            }
        }
        for(int i :erase){
            freq.erase(i);
        }
      }
      return ans;
        
    }
};