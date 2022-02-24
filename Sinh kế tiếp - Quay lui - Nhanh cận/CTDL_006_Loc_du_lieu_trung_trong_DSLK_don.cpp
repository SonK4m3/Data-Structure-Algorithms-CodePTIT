#include<bits/stdc++.h>
using namespace std;

typedef struct Node {
	int value;
	struct Node *next;
}node;

void insert(node **root, int x){
	node *tmp = *root;
	node *last = new node();
	last->value = x;
	last->next = NULL;
	
	if(*root == NULL){
		*root = last;
		return;
	}
	
	while(tmp->next != NULL){
		tmp = tmp->next;
	}
	tmp->next = last;
	return;
}

void print(node *root){
	if(root == NULL){
		cout << "NULL\n";
		return;
	}
	while(root != NULL){
		cout << root->value << " ";
		root = root->next;
	}
	return;
}

int main(){
	int n;
	cin >> n;
	node *root = NULL;
	map<int, bool> check;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		if(check[x] == false){
			check[x] = true;
			insert(&root, x);
		}
	}
	print(root);
	return 0;
}
