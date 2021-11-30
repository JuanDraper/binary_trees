#include "binary_trees.h"
/**
 *binary_tree_height - meassures height of tree
 *@tree: tree to meassure
 *Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	if (right < left)
		return (left);
	else
		return (right);
}

