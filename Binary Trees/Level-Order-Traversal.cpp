#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include<bits/stdc++.h>
using namespace std;

#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
#define pb push_back
#define PI 3.1415926535897932384626


struct Node {
    int data;
    struct Node* left;
    struct Node* right;
 
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* createTree(){
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->right = new Node(7);
	root->right->left = new Node(6);

	return root;
}
int main(){
	Node* head = createTree();
	queue<Node*> q;
	q.push(head);

	while(!q.empty()){
		Node* temp = q.front();
		q.pop();
		if(temp->left) q.push(temp->left);
		if(temp->right) q.push(temp->right);
		cout<<temp->data;
	}
    return 0;
}
