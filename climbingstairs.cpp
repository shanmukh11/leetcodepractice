class Solution {
public:
    
   /*      long long fact(int n)
    {
        if(n==0)
            return 1;
        else return n*fact(n-1);
    }
    
    int nck( unsigned n, unsigned k )
{
    if (k > n) return 0;
    if (k * 2 > n) k = n-k;
    if (k == 0) return 1;

    int result = n;
    for( int i = 2; i <= k; ++i ) {
        result *= (n-i+1);
        result /= i;
    }
    return result;
}*/
    
    int climbStairs(int n) {
        int res[3];
        res[0]=1;
        res[1]=1;
        if(n<2)
        {
            return res[n];
        }
        for(int i=2;i<=n;i++)
        {
            res[2]=res[0]+res[1];
            res[0]=res[1];
            res[1]=res[2];
        }
        return res[2];
        /*int sum=0;
        if(n%2==0)
        {
            for(int i=0;i<=n/2;i++)
            {
                sum+=nck(n/2+i,2*i);
                //sum+=fact(n/2+i)/(fact(n/2-i)*fact(2*i));
            }
        }
        else
        {
            for(int i=1;i<=n;i+=2)
            {
                sum+=nck((n+i)/2,i);
                //sum+=fact((n+i)/2)/(fact((n-i)/2)*fact(i));
            }
        }
        return sum;*/
    }
};