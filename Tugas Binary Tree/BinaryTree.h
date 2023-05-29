class Node{
	
	public:
		
		int val;
		
		Node *left;
		Node *right;
		
	Node(){
		
		right = left = NULL;
	}
};

class BinaryTree{
	
	public:
		
		void insertNode(int);
		Node *insertNodeRecursive(Node*, int);
		
		void deleteNode(int);
		
		void searchNode(int);
		Node *searchNodeRecursive(Node*, int);
		
		Node *findMin();
		Node *findMinRecursive(Node*);
		
		Node *findMax();
		Node *findMaxRecursive(Node*);
		
		void InOrder();
		void inorderRecursive(Node*);
		
		void PreOrder();
		void preorderRecursive(Node*);
		
		void PostOrder();
		void postorderRecursive(Node*);
		
		Node *root;
		
	BinaryTree()
	{
		root = NULL;
	}
};
