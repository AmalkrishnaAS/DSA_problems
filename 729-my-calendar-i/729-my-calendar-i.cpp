class MyCalendar {
public:
    
    vector<vector<int>> v;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
       bool flag=true;
        for(auto &p:v){
            if(p[0]<end and start<p[1]){
                flag=false;
                break;
            }
        }
        
        if(flag) v.push_back({start,end});
        return flag;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */