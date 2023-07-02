int maximumWealth(vector<vector<int>>& accounts) {
        int max=0;
        for (int i=0;i<accounts.size();i++)
        {
            int s=accumulate(accounts[i].begin(), accounts[i].end(), 0);
            if (s>max)
            {
                max=s;
            }
        }
        return max;
    }
