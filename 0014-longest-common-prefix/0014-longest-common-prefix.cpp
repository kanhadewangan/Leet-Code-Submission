class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         if(strs.empty()){
            return "";  
        }
        if(strs.size()==1){
            return strs[0]; 
        }
        string refs = strs[0];
        string ans ="";
        for(int i =0; i<refs.size(); i++){
            for(int j = 1; j<strs.size(); j++){
                if(i>=strs[j].size() || refs[i]!=strs[j][i]){
                    return ans;
                }
                else {
                    if(j==strs.size()-1){
                        ans+=refs[i];
                    }
                }
            }
        }
        return ans;
        
    }
};