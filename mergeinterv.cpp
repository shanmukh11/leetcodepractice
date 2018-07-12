/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    static bool compfunc(Interval i1,Interval i2)
    {
        return i2.start>i1.start;
    }
    
    vector<Interval> merge(vector<Interval>& intervals) {
        vector<Interval> res;
        if(intervals.size()==0) return res;
        sort(intervals.begin(),intervals.end(),compfunc);
        int low=intervals[0].start,high=intervals[0].end;
        
        for(int i=0;i<intervals.size();i++)
        {
            if(intervals[i].start>high)
            {
                Interval temp(low,high);
                res.push_back(temp);
                low=intervals[i].start;
                high=intervals[i].end;
            }
            else
            {
                if(intervals[i].end>high)
                    high=intervals[i].end;
            }
        }
        res.push_back(Interval(low,high));
        return res;
    }
};