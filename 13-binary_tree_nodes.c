#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts nodes with at least one child
 * @tree: pointer to root node
 * Return: amount of nodes with childs
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left || tree->right)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	else
		return (0);
}
