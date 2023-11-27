// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer
to left child and a pointer to right 
child */
struct Node {
	int data;
	struct Node *left, *right;
};

/* Helper function that allocates a new 
node with the given data and NULL left 
and right pointers. */
struct Node* newNode(int data)
{
	Node* temp = new Node;

	temp->data = data;
	temp->left = temp->right = NULL;

	return temp;
}

// Function to print the nodes of a complete
// binary tree in boundary traversal order
void boundaryTraversal(Node* root)
{
	if (root) {

		// If there is only 1 node print it
		// and return
		if (!(root->left) && !(root->right)) {
			cout << root->data << endl;
			return;
		}

		// List to store order of traversed
		// nodes
		vector<Node*> list;
		list.push_back(root);

		// Traverse left boundary without root
		// and last node
		Node* L = root->left;
		while (L->left) {
			list.push_back(L);
			L = L->left;
		}

		// BFS designed to only include leaf nodes
		queue<Node*> q;
		q.push(root);
		while (!q.empty()) {
			Node* temp = q.front();
			q.pop();
			if (!(temp->left) && !(temp->right)) {
				list.push_back(temp);
			}
			if (temp->left) {
				q.push(temp->left);
			}
			if (temp->right) {
				q.push(temp->right);
			}
		}

		// Traverse right boundary without root
		// and last node
		vector<Node*> list_r;
		Node* R = root->right;
		while (R->right) {
			list_r.push_back(R);
			R = R->right;
		}

		// Reversing the order
		reverse(list_r.begin(), list_r.end());

		// Concatenating the two lists
		list.insert(list.end(), list_r.begin(),
								list_r.end());

		// Printing the node's data from the list
		for (auto i : list) {
			cout << i->data << " ";
		}
		cout << endl;
		return;
	}
}

// Driver code
int main()
{

	// Root node of the tree
	Node* root = newNode(20);

	root->left = newNode(8);
	root->right = newNode(22);

	root->left->left = newNode(4);
	root->left->right = newNode(12);

	root->right->left = newNode(10);
	root->right->right = newNode(25);

	boundaryTraversal(root);

	return 0;
}
