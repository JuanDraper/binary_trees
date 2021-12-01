#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the amount of leaves
 * @tree: pointer to root node of a tree
 * Return: the amount of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		l = (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	else
		l = 1;
	return (l);
}
