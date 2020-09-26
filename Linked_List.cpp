#include<iostream>

using namespace std;

class Node {
public:
	int info;
	Node * next;
	Node() {
		info = 0;
		next = NULL;
	}
	void addAtStart(int n) {
		
			Node *temp = new Node;
			temp->info = n;
			temp->next = this->next;
			this->next = temp;
		
	}
	void addAtEnd(int n) {
		Node *temp = next;
		if (temp != NULL) {
			while (temp->next != NULL) {
				temp = temp->next;
			}
			Node *app = new Node;
			app->info = n;
			temp->next = app;
		}
		else {
			this->addAtStart(n);
		}
	}
};
int main() {
	Node *N = new Node;
	N->addAtStart(3);
	N->addAtStart(2);
	N->addAtEnd(5);
	N->addAtStart(1);
	Node * temp;
	temp = N;
	while (temp->next != NULL) {
		temp = temp->next;
		cout << "\n\ninfo : " << temp->info;
	}
	return 0;
}