//https://leetcode.com/explore/featured/card/top-interview-questions-easy/97/dynamic-programming/569/

int climbStairs(int n) {
        if(n==1)
            return 1;
        int f=1;
        int s=2;
        for(int i=3;i<=n;i++){
            int t=f+s;
            f=s;
            s=t;
        }
        return s;
    }