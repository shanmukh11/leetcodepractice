vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
    
        sort(people.begin(), people.end(), comp);
        vector<pair<int, int>> res;
        for (auto p : people) 
            res.insert(res.begin() + p.second, p);
        return res;
    }