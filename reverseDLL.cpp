ListNode* reverseDLL(ListNode* head) {
    ListNode* temp = head;
    stack<int> st;
    while (temp) {
        st.push(temp->data);
        temp = temp->next;   // semicolon added
    }

    temp = head;
    while (temp) {
        int x = st.top();
        st.pop();
        temp->data = x;
        temp = temp->next;
    }

    return head;
}
