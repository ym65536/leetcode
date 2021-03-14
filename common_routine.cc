void split(const std::string &s, char delim, vector<string>& result) {
    std::stringstream ss;
    ss.str(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        result.push_back(item);
    }
}


// reverse list range (prev, next), exclude prev and next
ListNode* reverseList(ListNode* prev, ListNode* next) {
    ListNode* last = prev->next;
    while (last->next != next) {
        ListNode* node = last->next;
        last->next = node->next;
        node->next = prev->next;
        prev->next = node;
    }
    return last;
}
