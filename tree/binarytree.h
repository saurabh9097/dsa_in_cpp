#ifndef BinaryTree_h
#define BinaryTree_h

template <class T>
class BinaryTree {
private:
    struct TreeNode {
        T data;
        TreeNode *left = nullptr;
        TreeNode *right = nullptr;
        TreeNode(T x): data(x), left(nullptr), right(nullptr){}
    };
    TreeNode *root = nullptr;

    // This is used to free the memory
    void deleteTree(TreeNode *node) {
        if(node == nullptr) {
            return;
        }
        deleteTree(node->left);
        deleteTree(node->right);
        delete node;
    }

    // This is used for the copy constructor
    void copyTree(TreeNode *thisRoot, TreeNode *sourceRoot) {
        if(sourceRoot == nullptr) {
            thisRoot = nullptr;
        }
        else {
            thisRoot = new TreeNode;
            thisRoot->data = sourceRoot->data;
            copyTree(thisRoot->left, thisRoot->left);
            copyTree(thisRoot->right, thisRoot->right);
        }
    }

    // These functions are for creating the tree
    void insertPrivate(TreeNode *&root, const T &theData);
    void insertPrivate(TreeNode *&root, T &&theData);

    // Traversal functions for printing the nodes
    void inorderTraversal(BinaryTree::TreeNode* root);
    void pretorderTraversal(BinaryTree::TreeNode* root);
    void postorderTraversal(BinaryTree::TreeNode* root);

public:
    // Constructors
    BinaryTree() = default;                                                       // empty constructor
    BinaryTree(BinaryTree const &source);                                         // copy constructor

    // Rule of 5
    BinaryTree(BinaryTree &&move) noexcept;                                       // move constuctor
    BinaryTree& operator=(BinaryTree &&move) noexcept;                            // move assignment operator
    ~BinaryTree();                                                                // destructor

    // Overload operators
    BinaryTree& operator=(BinaryTree const &rhs);

    // Member functions
    void insert(const T &theData);
    void insert(T &&theData);

    void printInorder();
    void printPreorder();
    void printPostorder();


};

template <class T>
BinaryTree<T>::BinaryTree(BinaryTree<T> const &source)  {
    if(source.root == nullptr) {
        root = nullptr;
    }
    else {
        copyTree(this->root, source.root);
    }
}

template <class T>
BinaryTree<T>::BinaryTree(BinaryTree &&move) noexcept {
    move.swap(*this);
}

template <class T>
BinaryTree<T>& BinaryTree<T>::operator=(BinaryTree<T> &&move) noexcept {
    move.swap(*this);
    return *this;
}

template <class T>
BinaryTree<T>::~BinaryTree() {
    deleteTree(root);
}

template <class T>
BinaryTree<T>& BinaryTree<T>::operator=(BinaryTree const &rhs) {
    BinaryTree copy(rhs);
    swap(copy);
    return *this;
}

template <class T>
void BinaryTree<T>::insertPrivate(TreeNode *&root, const T &theData) {
    if(root == nullptr) {
        root = new TreeNode{theData};
        return;
    }
    else if(theData < root->data) {
        insertPrivate(root->left, theData);
    }
    else {
        insertPrivate(root->right, theData);
    }
}

template <class T>
void BinaryTree<T>::insertPrivate(TreeNode *&root, T &&theData) {
    std::cout << "Using with move" << std::endl;
    if(root == nullptr) {
        root = new TreeNode{std::move(theData)};
        return;
    }
    else if(theData < root->data) {
        insertPrivate(root->left, std::move(theData));
    }
    else {
        insertPrivate(root->right, std::move(theData));
    }
}

template <class T>
void BinaryTree<T>::insert(const T &theData) {
    insertPrivate(root, theData);
}

template <class T>
void BinaryTree<T>::insert(T &&theData) {
    insertPrivate(root, theData);
}

template <class T>
void BinaryTree<T>::inorderTraversal(BinaryTree<T>::TreeNode *root)  {
    // The items in the left subtree are printed first, followed
    // by the item in the root node, followed by the items in
    // the right subtree.
    if(root != nullptr) {
        inorderTraversal(root->left);
        std::cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

template <class T>
void BinaryTree<T>::pretorderTraversal(BinaryTree<T>::TreeNode *root)  {
    // Print all the items in the tree to which root points.
    // The item in the root is printed first, followed by the
    // items in the left subtree and then the items in the
    // right subtree.
    if(root != nullptr) {
        std::cout << root->data << " ";
        pretorderTraversal(root->left);
        pretorderTraversal(root->right);
    }
}

template <class T>
void BinaryTree<T>::postorderTraversal(BinaryTree<T>::TreeNode *root)  {
    // Print all the items in the tree to which root points.
    // The items in the left subtree are printed first, followed
    // by the items in the right subtree and then the item in the
    // root node.
    if(root != nullptr) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        std::cout << root->data << " ";
    }
}

template <class T>
void BinaryTree<T>::printInorder() {
    inorderTraversal(root);
}

template <class T>
void BinaryTree<T>::printPreorder() {
    pretorderTraversal(root);
}

template <class T>
void BinaryTree<T>::printPostorder() {
    postorderTraversal(root);
}

#endif /* BinaryTree_h */