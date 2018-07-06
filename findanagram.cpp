class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        if(s.size()==0||p.size()==0||p.size()>s.size())
            return res;
        /*sort(p.begin(),p.end());        
        for(int i=0;i<s.size()-p.size()+1;i++)
        {
            string temp(s.begin()+i,s.begin()+i+p.size());
            sort(temp.begin(),temp.end());
            if(temp.compare(p)==0)
                res.push_back(i);
        }
        return res;*/
        vector<int> counts(26,0),countp(26,0);
        for(int i=0;i<p.size();i++)
        {
            countp[(int)(p[i]-'a')]+=1;
            counts[(int)(s[i]-'a')]+=1;
        }
        //return counts;
        for(int i=p.size();i<s.size();i++)
        {
            if(countp==counts)
                res.push_back(i-p.size());
            counts[s[i]-'a']+=1;
            counts[s[i-p.size()]-'a']-=1;
                       
        }
        if(countp==counts)
            res.push_back(s.size()-p.size());
        return res;
    }
};