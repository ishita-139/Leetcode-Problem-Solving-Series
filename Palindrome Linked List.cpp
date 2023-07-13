bool isPalindrome(ListNode* head) {
        stack<int> s;
        ListNode *temp=head;
        while(temp!= NULL)
        {
            s.push(temp->val);
            temp=temp->next;
        }
        while(head != NULL)
        {
            int x=s.top();
            s.pop();
            if (x != head->val)
            {
                return false;
            }
            head=head->next;
        }
        return true;
    }
