bool isMonotonic(vector<int>& nums) {
        vector<int> a,b;
        a=b=nums;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<int>());
        if (a==nums || b==nums)
        {
            return true;
        }
        return false;
    }
