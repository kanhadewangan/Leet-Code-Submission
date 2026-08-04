class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        int r  = n-1;
        int k = m+n-1;
        while(i>=0 and r>=0){
            if(nums1[i]>nums2[r]){
                nums1[k] = nums1[i];
                i--;
            }
            else{
                nums1[k] = nums2[r];
                r--;
            }
            k--;
        }
        while(r>=0){
            nums1[k] = nums2[r];
            k--;
            r--;
        }
        
    }
};