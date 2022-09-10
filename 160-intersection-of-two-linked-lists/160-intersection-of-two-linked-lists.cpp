class Solution {
public:
	ListNode *getIntersectionNode(ListNode *a, ListNode *b) {
		ListNode* a1 = a;
        ListNode* b1 = b;
		int len1 = 0 , len2 = 0;
		for( ; a != NULL ; a = a->next , len1++);
		for( ; b != NULL ; b = b->next , len2++);
		a = a1;
		b = b1;
		if(len1 > len2) for( ; a != NULL and len2 < len1 ; len2++ , a = a->next);
		if(len2 > len1) for( ; b != NULL and len1 < len2 ; len1++ , b = b->next);
		while(a!=NULL){
			if(a == b) return a;
			a = a->next;
			b = b->next;
		}

		return a;
	}
};