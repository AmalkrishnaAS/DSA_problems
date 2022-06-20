class Trie {
public:
    
    struct Node
    {
        struct Node *layer[26];
        bool end;
        
    };
    Node *root;
    Trie() {
         root=new Node();
    }
    
    void insert(string word) {
        
        Node *current=root;
        
        for(int i=0;word[i]!=0;i++)
        {
            int index=word[i]-'a';
            if(current->layer[index]==NULL)
            {
                current->layer[index]=new Node();
            }
            current=current->layer[index];
            
           
        }
         current->end=true;
        
    }
    
    bool search(string word) {
        Node *current=root;
        for(int i=0;word[i]!=0;i++)
        {
            int index=word[i]-'a';
            
            if(current->layer[index]==NULL) return false;
            current=current->layer[index];
        }
        return current->end;
        
    }
    
    bool startsWith(string word) {
         Node *current=root;
        for(int i=0;word[i]!=0;i++)
        {
            int index=word[i]-'a';
            
            if(current->layer[index]==NULL) return false;
            current=current->layer[index];
        }
        
        
        
        return true;
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */