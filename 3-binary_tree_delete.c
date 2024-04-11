#include "binary_trees.h"

/**
 * binary_tree_delete - Main entry point
 * Description: Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
