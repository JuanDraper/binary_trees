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
/**
 * binary_tree_balance - functions that measures the balance of a tree
 * @tree: pointer to root node
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);
	if (tree->left)
		l = binary_tree_height(tree->left);
	else
		l = -1;
	if (tree->right)
		r = binary_tree_height(tree->right);
	else
		r = -1;
	return (l - r);
}
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
/**
* binary_tree_is_perfect - Checks if a binary tree is perfect.
* @tree: Pointer to the root node of the tree to check.
* Return: 1 if it's perfect, 0 otherwise.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_is_full(tree) && !binary_tree_balance(tree))
	{
		if (tree->left)
			return (1 * binary_tree_is_perfect(tree->left) *
binary_tree_is_perfect(tree->right));
		else
			return (1);
	}
	return (0);
}
