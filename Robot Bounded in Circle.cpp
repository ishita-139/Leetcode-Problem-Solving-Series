bool isRobotBounded(string instructions) {
        int x=0, y=0;
        char d='N';
        for(int i=0; i<instructions.size(); i++){
            if(instructions[i]=='G'){
                if(d=='N'){
                    y++;
                }
                else if(d=='S'){
                    y--;
                }
                else if(d=='W'){
                    x--;
                }
                else if(d=='E'){
                    x++;
                }
            }
            else if(instructions[i]=='L'){
                if(d=='N'){
                    d='W';
                }
                else if(d=='S'){
                    d='E';
                }
                else if(d=='W'){
                    d='S';
                }
                else if(d=='E'){
                    d='N';
                }
            }
            else if(instructions[i]=='R'){
                if(d=='N'){
                    d='E';
                }
                else if(d=='S'){
                    d='W';
                }
                else if(d=='W'){
                    d='N';
                }
                else if(d=='E'){
                    d='S';
                }
            }
        }
        if( (x==0 && y==0) || d!='N'){return true;}
        return false;
    }
