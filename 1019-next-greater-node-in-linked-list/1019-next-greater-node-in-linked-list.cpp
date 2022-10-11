//1019-next-greater-node-in-linked-list.cpp
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
    /*  vector<int>ans;
        ListNode* temp=head;
        int counter=0;
        while(head)
        {
            temp=head->next;
            counter++;
            while(temp)
            {
                if(head->val<temp->val)
                {
                    ans.push_back(temp->val);
                    break;
                }
                temp=temp->next;
            }
            if(counter!=ans.size())
            {
                ans.push_back(0);
            }
            head=head->next;
        }
    //ans.push_back(0);
        return ans;*/
    vector<int> nextLargerNodes(ListNode* head) 
    {
       vector<int>res, stack;
        for(auto it=head; it!=nullptr; it=it->next)
        {
            res.push_back(it->val);
        }
        for(int i=res.size()-1; i>=0; i--)
        {
            auto val=res[i];
            while(!stack.empty() && res[i]>=stack.back()) stack.pop_back();
            res[i]=stack.empty()?0:stack.back();
            stack.push_back(val);
        }
            return res;
    }
};