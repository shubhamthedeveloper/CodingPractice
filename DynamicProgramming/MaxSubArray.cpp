
//https://leetcode.com/explore/featured/card/top-interview-questions-easy/97/dynamic-programming/566/

int maxSubArray(vector<int>& nums) {
        int sum =0;
        int maxSum = INT_MIN;
        for(int n : nums){
            sum += n;
            maxSum = max(sum,maxSum);
            if(sum<0)
                sum=0;
        }
        return maxSum;
    }