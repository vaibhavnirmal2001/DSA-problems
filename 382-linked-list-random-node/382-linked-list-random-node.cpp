class Solution {
public:
    map<int,ListNode*> mp;
    Solution(ListNode* head) 
    {
        ListNode *temp = head;
        int i=0;
        while(temp)
        {
           mp[i++]=temp;
           temp=temp->next;
        }    
    }

    int getRandom() 
    {
        int n = mp.size();
        return mp[rand()%n]->val;    
    }
};