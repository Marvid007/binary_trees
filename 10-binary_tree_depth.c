#include "binary_trees.h"

/**
 * binary_tree_depth - Computes depth of binary tree.
 * @tree: binary tree.
 *
 * Return: depth of given binary tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *node = NULL;

	if (tree != NULL)
	{
		node = tree->parent;
		while (node != NULL)
		{
			depth++;
			node = node->parent;
		}
	}
	return (depth);
}
