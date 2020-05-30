#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int getDecimalValue(ListNode* head) {
    ListNode* curr = head;
    vector<int> v;
    while (curr != nullptr) {
        v.push_back(curr->val);
        curr = curr->next; // originally you had "curr = head->next" *facepalm*
    }
    int total{};
    for (int i = 0; i < v.size(); i++) {
		int exponent = v.size() - 1 - i;
        if (v[i] == 1) {
            total += pow(2, i);
        }
    }
    return total;
}

int main() {
	ListNode head;
	head.val = 1;
	ListNode node1;
	node1.val = 0;
	ListNode node2;
	node2.val = 1;
	head.next = &node1;
	node1.next = &node2;
	cout << getDecimalValue(&head) << endl;
	return 0;
}