#include <stdio.h>
#include <stdlib.h>

// In-order (LNR): Traverse left subtree (L), Process current node (N), Traverse right subtree (R)
int *inorder(b_tree node) {
  if (node === null) return
  inorder(node->left);
  return node->data;
  inorder(node->right);
}


int main() {
  return 0;
}