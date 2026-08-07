#include <iostream>

// Node structure
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int item) {
        data = item;
        left = right = nullptr;
    }
};

// Search Function
bool search(Node* root, int key) {
    // root is null -> return false
    if (root == nullptr) return false;

    // if root has key -> return true
    if (root->data == key) return true;

    // Recursive Searching Loop to desired side
    if (key > root->data) return search(root->right, key);    
    else return search(root->left, key);
}
// Iterative While loop setup
// bool search(Node* root, int key) {
//     bool present = false;
    
//     // iterative traversal
//     while (root != nullptr) {
//         if (root->data == key) {
//             present = true;
//             break;
//         } 
//         else if (key > root->data)
//             root = root->right;
//         else
//             root = root->left;
//     }
//     return present;
// }
// Minimum search
int min_search(Node* root) {
    if (root==nullptr) return 0;
    while(root->left!=nullptr) return min_search(root->left);
    return root->data;
}
int max_search(Node* root) {
    if (root==nullptr) return 0;
    while(root->right!=nullptr) return max_search(root->right);
    return root->data;
}




int main() {
    /* Creating BST
        6
       / \
      2   8
         / \
        7   9
    */
    Node* root = new Node(6);
    root->left = new Node(2);
    root->right = new Node(8);
    root->right->left = new Node(7);
    root->right->right = new Node(9);

    int key = 7;
    
    // Searching for key in BST
    // std::cout << search(root, key) << std::endl;
    // If Exist will print Boolean Value T or F

    std::cout<<min_search(root)<<std::endl;
    std::cout<<max_search(root)<<std::endl;
}