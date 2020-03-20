//https://leetcode.com/explore/featured/card/top-interview-questions-easy/97/dynamic-programming/576/

int rob(vector<int>& nums) {
       
        int n = nums.size();
        int pre=0,cur=0;
        for(int i=0;i<n;i++){
            int temp = max(pre+nums[i],cur);
            pre = cur;
            cur = temp;
        }
        return cur;
    }