#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* next;


	node(int val, node* nextptr = nullptr) {
		data = val;
		next = nextptr;
	}
};

node* initialize_linked_list(int n) {
	node* head = new node(1);
	node* curr = head;
	for (int i = 2; i <= n; ++i) {
		curr->next = new node(i);
		curr = curr->next;
	}
	curr->next = head;
	return head;
}

void elimination(node* head) {
	node* curr = head;
	while(curr && (curr->next != curr)) {
		cout << curr->next->data << " ";
		node* to_delete = curr->next;
		curr->next = curr->next->next;
		delete to_delete;
		curr = curr->next;
	}
	if (curr) {
		cout << curr->data << " ";
		delete curr;
	}
}

int main() {
	int n; cin >> n;
	node* head = initialize_linked_list(n);
	elimination(head);
}
