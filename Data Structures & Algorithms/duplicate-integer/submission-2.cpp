class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int cnt = 0;
        sort(nums.begin(), nums.end());
        for(int i = 1; i<nums.size(); i++){
            if(nums[i] == nums[i-1]){
                cnt = 1;
                break;
            }
        }
        if(cnt != 0) return true;
        else return false;
    }
};