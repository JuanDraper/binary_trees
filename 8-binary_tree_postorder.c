#include "binary_trees.h"
/**
* binary_tree_postorder - traverse through a tree using preorder.
* @tree: tree to traverse.
* @func: function to call for each node.
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	if (tree->left && (tree->left->left || tree->left->right))
		binary_tree_postorder(tree->left, func);
	else if (tree->left)
		func(tree->left->n);
	if (tree->right && (tree->right->left || tree->right->right))
		binary_tree_postorder(tree->right, func);
	else if (tree->right)
		func(tree->right->n);
	func(tree->n);

}
