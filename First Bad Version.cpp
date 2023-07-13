int firstBadVersion(int n) {
        int start=1,end=n,ans;
        while(start<=end)
        {
            int mid=start+ (end-start)/2;
            bool x=isBadVersion(mid);
            if (x==false)
            {
                start=mid+1;
            }
            else
            {
                ans=mid;
                end=mid-1;
            }
        }
        return ans;
    }
