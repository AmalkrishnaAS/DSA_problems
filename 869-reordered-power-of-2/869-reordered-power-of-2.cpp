class Solution {
public:
    map<int,int>  count(int n){
        
        map<int,int> m;
        while(n) {
            int digit=n%10;
            m[digit]++;
            n/=10;
        }
        
        return m;
    }
    bool reorderedPowerOf2(int n) {
        map<int,int> num=count(n);
        for(int i=0;i<31;i++){
            if(num==count(1<<i)) return true;
        }
        
        return false;
    
        
    }
};