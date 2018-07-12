class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int c=0,residue=target;
        vector<int> prevcand(candidates.begin()+1,candidates.end());
        vector<vector<int>> res;
        if(candidates.size()==0) return res;
        if(candidates.size()==1)
        {
            if(target%candidates[0]==0)
            {
                vector<int> v(target/candidates[0],candidates[0]);
                res.push_back(v);
                return res;
            }
            else return res;
        }
        while(residue>=0)
        {  
            vector<int> attach(c,candidates[0]);
            if(residue==0)
            {
                res.push_back(attach);
                return res;
            }
            vector<vector<int>> prev=combinationSum(prevcand,residue);
            residue-=candidates[0];
            c++;
            for(int i=0;i<prev.size();i++)
            {
                prev[i].insert(prev[i].begin(),attach.begin(),attach.end());
                res.push_back(prev[i]);
            }
            
        }
        return res;
    }
};