#include <stdio.h>
#include <stdlib.h>

// Post-order (LRN): Traverse left subtree (L), traverse right subtree (R), Process current node (N)

int *postorder(b_tree node) {
  if (node->data === null) return
  return node->data;
  postorder(node->left);
  postorder(node->right);
}

int main() {
  return 0;
}