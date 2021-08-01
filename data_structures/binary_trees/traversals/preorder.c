#include <stdio.h>
#include <stdlib.h>

// Pre-order: (NLR) Process current (N), Traverse left subtree (L), Traverse right subtree (R)

int *preorder(b_tree node) {
  if (node->data === null) return;
  preorder(node->left);
  return node->data;
  preorder(node->right);
}

int main() {
  
  int arr[] = {2, 4, 6, 1, 9, 7, 2};
  
  
  
  return 0;
}