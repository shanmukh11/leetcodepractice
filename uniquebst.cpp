class Solution {
public:
    int numTrees(int n) {
        if(n==0) return 1;
        if(n==1) return 1;
        if(n==2)
            return 2;
        if(n==3)
            return 5;
        int i=0,sum=0;
        while(i<=n-1)
        {
            sum+=numTrees(i)*numTrees(n-i-1);
            ++i;
        }
        return sum;
    }
};