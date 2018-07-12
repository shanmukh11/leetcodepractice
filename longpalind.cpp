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
    
    string longestPalindrome(string s) {
        int n=s.length();
        
        if(n<=1) return s;
        int len=0,start=0,maxl=0;
        for(int i=0;i<n;i++)
        {
            int l1=lengthfrom(s,i,i);
            int l2=lengthfrom(s,i,i+1);
            len=max(l1,l2);
            if(len>maxl)
            {
                start=i-(len-1)/2;
                maxl=len;
            }
        }
        return s.substr(start,maxl);
    }
};