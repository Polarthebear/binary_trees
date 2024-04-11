#include "binary_trees.h"

/**
 * binary_tree_nodes - Main entry point
 * Description: Counts the nodes with at least 1 child in a binary tree
 * @tree: Tree to count the nodes
 * Return: number of nodes counted or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

/**
 * binary_tree_size - Main entry point
 * Description: Measures the size of a binary tree
 * @tree: Tree to measure the size
 * Return: size of the tree or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_leaves - Main entry point
 * Description: Counts the leaves in a binary tree
 * @tree: Tree to count the leaves
 * Return: number of leaves or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
