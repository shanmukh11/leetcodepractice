class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        vector<string> res2={""};
        if(n==0) return res2;
        string s={"()"};
        if(n==1)
        {
            res.push_back(s);
            return res;
        }
        else
        {
            vector<string> temp=generateParenthesis(n-1);
            for(int i=0;i<temp.size();i++)
            {
                int j=1,open=1,close=0;;
                temp[i].insert(temp[i].begin(),'(');
                while(j<2*n)
                {   
                    if(close==open-1)
                    {
                        string temp2=temp[i];
                        temp2.insert(temp2.begin()+j,')');
                        res.push_back(temp2);
                        string temp3=temp2;
                        
                        for(int k=0;k<temp3.size();k++)
                        {
                            if(temp3[k]=='(')
                                temp3[k]=')';
                            else temp3[k]='(';
                        }
                        
                        reverse(temp3.begin(),temp3.end());
                        if(temp2!=temp3)
                        {
                            res.push_back(temp3);
                            
                        }                        
                    }
                    if(temp[i][j]==')')
                        close++;
                    else
                        open++;
                    
                    ++j;
                }
                
            }
        }
        set<std::string> set;
        unsigned size = res.size();
        for( unsigned i = 0; i < size; ++i ) set.insert( res[i] );
        res.assign( set.begin(), set.end() );
        return res;
        
    }
};