#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if given node is root node.
 * @node: node to check.
 *
 * Return: 1 if it is root node, otherwise 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if ((node != NULL) && (node->parent == NULL))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
