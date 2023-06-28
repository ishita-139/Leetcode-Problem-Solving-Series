bool repeatedSubstringPattern(string s) {
      string t=s+s;
      if (t.substr(1,t.size()-2).find(s)==-1)
      {
          return false;
      }
      return true;

    }
