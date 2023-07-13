bool canConstruct(string ransomNote, string magazine) {
        unordered_map<int,int> map;
        for ( char c: magazine)
        {
            map[c]++;
        }
        for (char ch: ransomNote)
        {
            if (map[ch]-- <=0)
            {
                return false;
            }
        }
        return true;
    }
