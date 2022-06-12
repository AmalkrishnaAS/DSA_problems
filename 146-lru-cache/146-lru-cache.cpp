class LRUCache {
public:
    
    unordered_map<int,int> m;
    list<int> l;
    int c;
    int size;
    unordered_map<int,list<int>::iterator> address;
    LRUCache(int capacity) {
        c=capacity;
        size=0;
        
    }
    
    int get(int key) {
        if(m.find(key) ==m.end()) return -1;
        
        l.erase(address[key]);
        address.erase(key);
        l.push_front(key);
        address[key]=l.begin();
        
        return m[key];
        
    }
    
    void put(int key, int value) {
           if(m.find(key) !=m.end())
           {
               l.erase(address[key]);
               address.erase(key);
               m.erase(key);
               size--;
           }
        if(size==c)
        {
            int k= l.back();
            l.pop_back();
            address.erase(k);
            m.erase(k);
            size--;
            
        }
        size++;
        l.push_front(key);
        address[key]=l.begin();
        m[key]=value;
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */