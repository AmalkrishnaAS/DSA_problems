/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode *head;
    Solution(ListNode* head) {
        this->head=head;
        
        
    }
    
    int getRandom() {
        
        vector<int> v;
        ListNode *selected=head;
        
        while(selected) {
            v.push_back(selected->val);
            selected=selected->next;
            
        }
        
        return v[rand()%v.size()];
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */