#include <bits/stdc++.h>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode(): val(0), next(nullptr) {}
	ListNode(int x): val(x), next(nullptr) {}
};

class Solution {
public:
	ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1 and !list2)
        return NULL;
        ListNode* res = new ListNode();
		ListNode* temp = res;
		ListNode* prev = NULL;
		while(list1 and list2) {
			int ans = 0;
			if(list1->val <= list2->val) {
				ans = list1->val;
				list1 = list1->next;
			} else {
				ans = list2->val;
				list2 = list2->next;
			}
			temp->val = ans;
			prev = temp;
			temp->next = new ListNode();
			temp = temp->next;
		}
		while(list1) {
			temp->val = list1->val;
			temp->next = new ListNode();
			prev = temp;
			temp = temp->next;
			list1 = list1->next;
		}
		while(list2) {
			temp->val = list2->val;
			temp->next = new ListNode();
			prev = temp;
			temp = temp->next;
			list2 = list2->next;
		}
        if(prev)
		prev->next = NULL;
		return res;
    }
};

int main() {
	ListNode* list1 = new ListNode();
	ListNode* temp = list1;
	temp->val = 1;
	temp->next = new ListNode(2);
	temp = temp->next;
	temp->next = new ListNode(4);

	ListNode* list2 = new ListNode(1);
	temp = list2;
	temp->next = new ListNode(3);
	temp = temp->next;
	temp->next = new ListNode(4);

	temp = list1;
	// while(temp) {
	// 	cout << temp->val << endl;
	// 	temp = temp->next;
	// }
	Solution obj;
	temp = obj.mergeTwoLists(list1, list2);
	while(temp) {
		cout << temp->val << " ";
		temp = temp->next;
	}
	return 0;
}