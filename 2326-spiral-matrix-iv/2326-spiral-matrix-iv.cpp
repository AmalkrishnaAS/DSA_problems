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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        
        
        
        
        ListNode *selected=head;
        
       
        
   
        int top=0,bottom=m-1,left=0,right=n-1;
        
        vector<vector<int>> ans(m,vector<int>(n,-1));
        
        if(not selected) return ans;
        
       
        
        while(top<=bottom and left<=right)
        {
            for(int i=left;i<=right;i++) {
                ans[top][i]=selected->val;
                selected=selected->next;
                if(not selected) return ans;
            }
            top++;
            
            
            for(int i=top;i<=bottom;i++){
                ans[i][right]=selected->val;
                selected=selected->next;
                 if(not selected) return ans;
            }
            right--;
            
            
            if(top<=bottom and left<=right){
                
                
                for(int i=right;i>=left;i--) {
                    
                    ans[bottom][i]=selected->val;
                    selected=selected->next;
                    
                    if(not selected) return ans;
                    
                }
                
                bottom--;
                for(int i=bottom;i>=top;i--) 
                {
                    ans[i][left]=selected->val;
                    selected=selected->next;
                    if(not selected) return ans;
                }
                left++;
            }
            
            
        }
        
        return ans;
                    
        

        
    }
};