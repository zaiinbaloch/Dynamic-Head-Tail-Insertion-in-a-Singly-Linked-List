#include<iostream>
#include<cstdlib>
using namespace std;

struct Node {
	int data;
	Node* next;
};

class LinkList {
	Node* head = NULL;
public :
	void fronter(int d) {
		Node* node = new Node;
		if (head == NULL) {
			node->data = d;
			head = node;
			head->next = NULL;
		}
		else {
			node->data = d;
			node->next = head;
			head = node;
		}
	} 
	void tail(int d){
		Node* node = new Node;
		node->data = d;
		node->next = NULL;
		if (head == NULL) {
			head = node;
		}
		else {
			Node* temp = head;
			while (temp->next != NULL) {
				temp = temp->next;
			}
			temp->next = node;
		}
	}

	void display() {
		Node* temp = head;
		while (temp != NULL) {
			cout << temp->data << " -> ";
			temp = temp->next;
		}
		cout <<"NULL" << endl;
	}
	void headtailinsertion(int d) {
		int count = 1;
		int h, t;
		Node* temp = head;
		while (temp != NULL) {
			temp = temp->next;
			count++;
		}
		t = count / 2;
		h = count - t;
		if (count % 2 != 0) {
			fronter(d);
			cout <<"\n" << d << " is inserted at head" << endl;
			cout << "\nUpdated List :\n";
			display();
			cout << "\nTotal " << h << " values are inserted at Head and " << t << " value are inserted at tail";
		}
		else if (count % 2 == 0) {
			tail(d);
			cout << "\n" << d << " is inserted at tail" << endl;
			cout << "\nUpdated List :\n";
			display();
			cout << "\nTotal " << h << " values are inserted at Head and " << t << " value are inserted at tail";
		}
	}
};
int main() {
	LinkList l;
	int d;
	char ch;
	do {
		cout << "\nCurrent list :\n";
		l.display();
		cout << "\nEnter A value :";
		cin >> d;
		l.headtailinsertion(d);
	
		cout << "\nDo you want to continue? (Y/N) :";
		cin >> ch;
		system("cls");
	} while (ch=='y' || ch == 'Y');
	cout << "\nList entered by You : \n";
	l.display();
	cout << "\nCode By : Zain Ul Abidin";
	cout << "\nSigning off...\n";
}