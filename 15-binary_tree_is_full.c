#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if every node has either 0 or 2 children
 * @tree: pointer to the root node of the binary tree to check
 * Return: 1 if the tree is full or 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && 
			binary_tree_is_full(tree->right));
	return (0);

}
