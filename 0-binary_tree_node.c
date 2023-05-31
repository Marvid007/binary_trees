#include "binary_trees.h"

/**
 * binary_tree_node - Creates binary tree node.
 * @parent: parent node of new binary tree node.
 * @value: value of new binary tree node.
 *
 * Return: pointer to created node, otherwise NULL.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node != NULL)
	{
		new_node->left = NULL;
		new_node->right = NULL;
		new_node->parent = parent;
		new_node->n = value;
	}
	return (new_node);
}
