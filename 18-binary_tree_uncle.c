#include "binary_trees.h"

/**
 * binary_tree_uncle - returns a pointer to the uncle
 * (sibling to parent node) of a node in a binary tree
 * @node: pointer to the node whose uncle is to be determined
 * Return: pointer to the uncle of a node or NULL if there is no uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
			node->parent->parent == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - returns a pointer to the sibling of
 * a node in a binary tree
 * @node: pointer to the node whose sibling is to be returned
 * Return: pointer to the sibling of a node or NULL if a node is NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else if (node->parent->right == node)
		return (node->parent->left);
	else
		return (NULL);
}
