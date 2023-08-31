#include "binary_trees.h"

/**
 * binary_trees_ancestor - returns a pointer to the lowest
 * common ancestor of two nodes in a binary tree
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor of two nodes
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *ancestor;
	const binary_tree_t *current;

	if (first == NULL || second == NULL)
		return (NULL);

	ancestor = first;
	while (ancestor != NULL)
	{
		current = second;
		while (current != NULL)
		{
			if (ancestor == current)
				return ((binary_tree_t *)ancestor);
			current = current->parent;
		}
		ancestor = ancestor->parent;
	}

	return (NULL);
}
