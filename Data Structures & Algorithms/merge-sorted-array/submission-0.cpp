class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // for(int i = m; i < nums1.size() ; i++ ){
        //     for(int j = 1; j < nums2.size(); j++){
        //         nums1[i] = nums2[j];
        //     }
        // }
        int j = 0;
        for(int i = m; i < nums1.size(); i++){
            nums1[i] = nums2[j];
            j++;
        }
        sort(nums1.begin(), nums1.end());
    }
};