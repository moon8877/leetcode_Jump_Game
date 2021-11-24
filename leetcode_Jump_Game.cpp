class Solution {
public:
    bool canJump(vector<int>& nums) {
        int m = nums.size();
        int far = 0;
        for(int i=0;i<m;i++){
            if(i>far){
                break;
            }
            far = max(far,nums[i]+i);
        }
        return far>=m-1;
    }

};
