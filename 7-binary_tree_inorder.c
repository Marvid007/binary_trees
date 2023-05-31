#include "binary_trees.h"

/**
 * binary_tree_inorder - Performs preorder traversal on a tree.
 * @tree: tree to traverse.
 * @func: function to handle traversed node's value.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree != NULL) && (func != NULL))
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
