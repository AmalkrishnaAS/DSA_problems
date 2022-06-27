# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
        
        dummy=ListNode(0,head)
        curr,prev=head,dummy
        
        while curr and curr.next:
            
            #save ptrs
            second=curr.next
            nxt=curr.next.next
            
            #actual manipulation
            
            second.next=curr
            prev.next=second
            curr.next=nxt
            
            #update ptrs
            
            prev=curr
            curr=nxt
            
            
        return dummy.next
            
        