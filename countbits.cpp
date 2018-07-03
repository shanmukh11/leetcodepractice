class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> res{0};
        if(num==0)
            return res;
        res.push_back(1);
        if(num==1)
        {
            return res;
        }
        res.push_back(1);
        if(num==2)
        {
            return res;
        }
        res.push_back(2);
        if(num==3)
        {
            return res;
        }
        
            
        int c=0;
        for(int i=4;i<=num;i++)
        {
            res.push_back(res[c]+1);
            if((i+1)==2*(c+1))
            {
                c=0;
                continue;
            }
            ++c;
        }

        return res;
    }
};