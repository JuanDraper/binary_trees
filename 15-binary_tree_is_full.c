#include "binary_trees.h"
/**
 * binary_tree_is_full - function that determines is a tree is full
 * @tree: pointer to root node
 * Return: 1 if full, 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else if (!tree->left && !tree->right)
		return (1);
	else if (tree->left && tree->right)
		return (1 * binary_tree_is_full(tree->left) * binary_tree_is_full(tree->right
));
	else
		return (0);
}
