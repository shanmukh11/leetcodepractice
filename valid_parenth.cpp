class Solution {
public:
    bool isValid(string s) {
        int c1=0,c2=0,c3=0;
        vector<int> hist;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                c1++;
                hist.push_back(1);
            }
            else if(s[i]==')'&&c1>0)
            {
                c1--;
                if(hist.back()==1)
                {
                    hist.pop_back();
                    continue;
                }
                else return false;
            }
            else if(s[i]=='{')
            {
                c2++;
                hist.push_back(2);
            }
            else if(s[i]=='}'&&c2>0)
            {
                c2--;
                if(hist.back()==2)
                {
                    hist.pop_back();
                    continue;
                }
                else return false;
            }
            else if(s[i]=='[')
            {
                c3++;
                hist.push_back(3);
            }
            else if(s[i]==']'&&c3>0)
            {
                c3--;
                if(hist.back()==3)
                {
                    hist.pop_back();
                    continue;
                }
                else return false;
            }
            else return false;
        }
        if(c1==0&&c2==0&&c3==0)
        {
            return true;
        }
        else return false;
        
    }
};