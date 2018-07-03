class Solution {
public:
    int hammingDistance(int x, int y) {
        int a=x^y;
        int c=0;
        while(a>0)
        {
            if(a%2==1)
                c++;
            a/=2;
        }
        return c;
    }
};