//  In-order successor of a given node the BST
// What is In-Order Successor in BST?

// The in-order successor of a node in a BST is the node with the smallest value greater than the given node.

// There are 2 cases:
// CASE 1: Node has a right subtree

// 👉 Successor = leftmost node in the right subtree.

//       20
//         \
//          30
//         /
//        25


// Successor of 20 is 25.

// CASE 2: Node has NO right subtree

// 👉 Move up using an ancestor →
// The successor is the lowest ancestor for which we came from its left child.

//         50
//        /
//       30
//      /  \
//     20  40


// Successor of 40 is 50.  
#include<iostream>
using namespace std;
