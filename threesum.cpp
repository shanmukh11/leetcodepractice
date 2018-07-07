class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        sort(a.begin(),a.end());
        int n=a.size();
        int left=0,mid=1,right=n-1;
        int sum=0;
        vector<vector<int>> res;
        if(n<3) return res;
        if(n==3&&a[left]+a[mid]+a[right]!=0)
            return res;
        while(mid<right)
        {
            while(mid<right)
            {
                sum=a[left]+a[mid]+a[right];
                if(sum>0)
                {
                    right--;
                }
                else if(sum==0)
                {
                    vector<int> v(3,0);
                    v[0]=a[left];
                    v[1]=a[mid];
                    v[2]=a[right];
                    res.push_back(v);
                    while(a[mid+1]==a[mid]&&mid<=right-1)
                        mid++;
                    ++mid;
                    while(a[right-1]==a[right]&&mid<=right-1)
                       right--;
                    right--;
                }
                else
                {
                    while(a[mid+1]==a[mid]&&mid<right-1)
                        mid++;
                    ++mid;
                }
            }
         
            while(a[left+1]==a[left])
                left++;
            ++left;
            mid=left+1;
            right=n-1;
        }
        
        return res;
    }
};