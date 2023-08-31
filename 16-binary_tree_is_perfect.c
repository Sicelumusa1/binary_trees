#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks is a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: the height of the tree or 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	return (binary_tree_is_perfect_recursive(tree, height, 0));
}

int binary_tree_is_perfect_recursive(const binary_tree_t *tree, 
	size_t height, size_t level)
{
	if (tree == NULL)
		return (1);
	
	if (tree->left == NULL && tree->right == NULL)
		return (height == level + 1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (binary_tree_is_perfect_recursive(tree->left, height, level + 1) 
			&& binary_tree_is_perfect_recursive(tree->right, height,
				level + 1));
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of the tree or 0 if the tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
        size_t left_height = 0, right_height = 0;
	
	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left_height = binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		right_height = binary_tree_height(tree->right) + 1;
	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
