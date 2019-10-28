#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node * left;
	Node * right;
	Node * parent;

	Node(int x): data(x), left(nullptr), right(nullptr), parent(nullptr){}
};

Node * root;

Node * insert(Node * now, int val){
	if (now == nullptr) {
		Node * tmp = new Node(val);
		return tmp;
	}else if (now->data < val) {
		now->right = insert(now->right, val);
		return now;
	}else {
		now->left = insert(now->left, val);
		return now;
 	}
}

void print(Node * root){
	if (root == nullptr) return;
	else {
		print(root->left);
		print(root->right);
		cout << root->data << '\n';
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int node;
	while (cin >> node){
		root = insert(root, node);
	}
	print(root);
}	