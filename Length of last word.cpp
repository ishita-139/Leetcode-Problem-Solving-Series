int lengthOfLastWord(string s)
     {
        int n=s.size(),ans=0,charfound=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]==' ' && charfound)break;
            if(s[i]!=' '){
                charfound=1;
                ans++;
            }
        }
        return ans;
    }
