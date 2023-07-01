bool checkStraightLine(vector<vector<int>>& v) {
        //m=(x2-x1)/(y2-y1)
        for(int i = 2; i < v.size(); i++){
            if(((v[i][0]-v[0][0])*(v[1][1]-v[i][1]))!=((v[i][1]-v[0][1])*(v  [1][0]-v[i][0])))return false;
        }
        return true;
    }
