class Solution {
public:
    int maxArea(int m, int n, vector<int>& h, vector<int>& v) {
        
        int y=0;
        int x=0;
        int mod=1e9+7;
        v.push_back(0);
        h.push_back(0);
        v.push_back(n);
         h.push_back(m);
        sort(h.begin(),h.end());
        sort(v.begin(),v.end());
    
    for(int i=1;i<v.size();i++)
    {
        y=max(y,abs(v[i-1]-v[i]));
    }
        
    for(int i=1;i<h.size();i++)
    {
        x=max(x,abs(h[i-1]-h[i]));
    }
        if(v.size()==1) y=max((m-1)-v[0],v[0]);
        if(h.size()==1) x=max((n-1)-h[0],h[0]);
        return (1LL*x*y)%mod;
    }
};