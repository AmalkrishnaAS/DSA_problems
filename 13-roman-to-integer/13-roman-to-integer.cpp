class Solution {
public:
    int romanToInt(string s) {
        int num=0;
        for(int i=0; i< s.length();i++)
        {
            if(s[i]=='I')
            {
                num++;
                
            }
            if(s[i]=='V')
            {
                num+=5;
                if(i!=0&&s[i-1]=='I')
                {
                    num-=2;
                }
            }
            if(s[i]=='X')
            {
                num+=10;
                 if(i!=0&&s[i-1]=='I')
                {
                    num-=2;
                }
            }
             if(s[i]=='L')
            {
                num+=50;
                 if(i!=0&&s[i-1]=='X')
                {
                    num-=20;
                }
            }
             if(s[i]=='C')
            {
                num+=100;
                 if(i!=0&&s[i-1]=='X')
                {
                    num-=20;
                }
            }
             if(s[i]=='D')
            {
                num+=500;
                 if(i!=0&&s[i-1]=='C')
                {
                    num-=200;
                }
                
            }
             if(s[i]=='M')
            {
                num+=1000;
                 if(i!=0&&s[i-1]=='C')
                {
                    num-=200;
                }
                
            }
            
        }
        return num;
        
    }
};