class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, multiset<string>> m;
        for (string s : strs) {
            string t = s; 
            sort(t.begin(), t.end());
            m[t].insert(s);
        }
        vector<vector<string>> anagrams;
        for (auto mp : m) { 
            vector<string> anagram(mp.second.begin(), mp.second.end());
            anagrams.push_back(anagram);
        }
        return anagrams;
    }
};