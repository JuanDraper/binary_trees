#include "binary_trees.h"
/**
 *binary_tree_is_leaf - checks if a node is leaf
 *@node: node to check
 *Return: 0 if not leaf or node is NULL, 1 if node is leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);
	return (1);
}
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
 * checkingFunc - checks
 * @tree: pointer to the root node of the tree to check
 * Return: 1 or 0
 */
int checkingFunc(const binary_tree_t *tree)
{
	binary_tree_t *l, *r;

	if (tree == NULL)
		return (1);
	l = tree->left;
	r = tree->right;
	if (binary_tree_is_leaf(tree))
		return (1);
	if (l == NULL || r == NULL)
		return (0);
	if (binary_tree_height(l) == binary_tree_height(r))
	{
		if (checkingFunc(l) && checkingFunc(r))
			return (1);
	}
	return (0);
}
/**
 * binary_tree_is_complete -  checks if a binary tree is complete
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if complete, 0 otherwise. If tree is NULL, return 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t l_height, r_height;
	binary_tree_t *l, *r;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	l = tree->left;
	r = tree->right;
	l_height = binary_tree_height(l);
	r_height = binary_tree_height(r);
	if (l_height == r_height)
	{
		if (checkingFunc(l) && binary_tree_is_complete(r))
			return (1);
	}
	else if (l_height == r_height + 1)
	{
		if (binary_tree_is_complete(l) && checkingFunc(r))
			return (1);
	}
	return (0);
}
