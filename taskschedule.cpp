class Solution {
    private:
        int empty;
        
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> c(26,0);
        for(char t : tasks){
            c[t - 'A']++;
        }
        sort(c.begin(),c.end());
        int i = 25;
        while(i >= 0 && c[i] == c[25]) i--;

        return max((int)tasks.size(), (c[25] - 1) * (n + 1) + 25 - i);
    }
};