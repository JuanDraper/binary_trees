#include "binary_trees.h"
/**
 *check - checks if nodes ar less or higher
 *@tree: subtree to ckeck
 *@n: value of node
 *@d: 0 for left, 1 for right
 *Return: 1 if in correct order, 0 otherwise
 */
int check(binary_tree_t *tree, int n, int d)
{
	if (!tree)
		return (1);
	if (d)
		return (1 * tree->n > n ? (check(tree->right, n, d)
			* check(tree->left, n, d)) : 0);
	else
		return (1 * tree->n < n ? (check(tree->right, n, d)
			* check(tree->left, n, d)) : 0);
}
/**
 *binary_tree_is_bst - checks if is a valid bst
 *@tree: pointer to root node
 *Return: 1 if valid bst, 0 if not
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree || !check(tree->left, tree->n, 0) || !check(tree->right, tree->n, 1)
)
		return (0);
	if ((!tree->left || tree->left->n < tree->n) &&
		(!tree->right || tree->right->n > tree->n))
		return (1 * (tree->left ? binary_tree_is_bst(tree->left) : 1) *
			(tree->right ? binary_tree_is_bst(tree->right) : 1));
	return (0);
}
