int partitionString(string s) 
    {
        vector<int> lastseen(26,-1);
        int ans=1,start=0;
        for (int i=0;i<s.length();i++)
        {
            if (lastseen[s[i]-'a']>=start)
            {
                ans++;
                start=i;
            }
            lastseen[s[i]-'a']=i;
        }
        return ans;

        
    }
