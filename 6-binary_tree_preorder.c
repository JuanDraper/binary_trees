#include "binary_trees.h"
/*
 *
 *
 *
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	if (tree->left && (tree->left->left || tree->left->right))
		binary_tree_preorder(tree->left, func);
	else if (tree->left)
		func(tree->left->n);
	if (tree->right && ( tree->right->right || tree->right->left))
		binary_tree_preorder(tree->right, func);
	else if (tree->right)
		func(tree->right->n);
}
