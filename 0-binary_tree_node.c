#include "binary_trees.h"

/**
 * binary_tree_node - Main entry point
 * Description: Creates a new binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to put in the new node
 * Return: Pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* Declaration */
	binary_tree_t *newNode;

	/* Allocating Memory Space */
	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	/* Assigning values */
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
