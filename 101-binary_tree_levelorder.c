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
* traverse_level - goes through levels
* @tree: Pointer to root node
* @func: Pointer to a function
* @i:  level of the tree.
*/
void traverse_level(const binary_tree_t *tree, void (*func)(int), size_t i)
{
	if (!tree)
		return;
	if (i == 1)
		func(tree->n);
	else
	{
		traverse_level(tree->left, func, i - 1);
		traverse_level(tree->right, func, i - 1);
	}
}
/**
* binary_tree_levelorder - level order through tree.
* @tree: Pointer to root node
* @func: Pointer to a function
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t i, h;

	if (!tree || !func)
		return;
	h = binary_tree_height(tree) + 1;
	for (i = 1; i <= h; i++)
		traverse_level(tree, func, i);
}
