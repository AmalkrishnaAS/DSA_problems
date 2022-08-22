class Solution {
public:
    unordered_map<char,vector<int> > um;
    int uniqueLetterString(string s) {
        int n =s.size();
        for(int i=0;i<n;i++)
        {
          
            um[s[i]].push_back(i);
           
        }
        
        for(char a ='A';a<='Z';a++)
        {
            um[a].push_back(-1);
            um[a].push_back(n);
            sort(um[a].begin(),um[a].end());
        }
        vector<int> left(n,0);
        vector<int> right(n,0);
        
        for(auto i : um)
        {
            if(i.second.size()==2)continue;
            vector<int> p=i.second;
           // cout<<i.second.size()<<endl;
            for(int j=1;j<p.size()-1;j++)
            {
                left[p[j]]=p[j-1];
                right[p[j]]=p[j+1];
            }
            
        }
        long sum=0;
       for(int i=0;i<n;i++)
        {
            int rightmin = right[i];
            int leftmin = left[i];
        long long int s= rightmin - leftmin -1;
          long long int  r = rightmin - i -1;
          long long int  l = i-1-leftmin;
            sum = (sum + ((((s)*((s+1))/2)- ((r)*((r+1))/2)  -((l) * ((l+1))/2))*(1)));
        }
        
        
       return sum;
        
    }
};