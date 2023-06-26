string mergeAlternately(string word1, string word2) {
        int n=word1.size(),m=word2.size();
        int i=0,j=0;
        string ans;
        while(i<n && j<m)
        {
            ans += word1[i++];
            ans +=word2[j++];
        }
        if ( i>=n)
        {
            ans+= word2.substr(j);
        }
        else 
        {
            ans += word1.substr(i);
        }
        return ans;
    }
