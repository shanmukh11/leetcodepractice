class Solution {
public:
    int lengthfrom(string s,int left,int right)
    {
        while(left>=0&&right<s.length()&&s[left]==s[right])
        {
            left--;
            right++;
        }
        return right-left-1;
    }
        
    int countSubstrings(string s) {
        int n=s.length();
        
        int len=0,res=0;
        for(int i=0;i<n;i++)
        {
            int l1=lengthfrom(s,i,i);
            int l2=lengthfrom(s,i,i+1);
            res+=(l1+1)/2;
            res+=(l2+1)/2;
        }
        return res;
    }
};