double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double n=salary.size();
        double ans=0;
        for (int i=1;i<n-1;i++)
        {
            ans+=salary[i];
        }
        return (double)ans/(n-2);
        
    }
