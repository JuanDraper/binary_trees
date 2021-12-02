#include "binary_trees.h"
/**
 *binary_tree_rotate_right - rotates binary tree right
 *@tree: pointer to root node of tree to rotate
 *Return: poiter to the rotated tree's new root node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *tmp;

	if (!tree)
		return (NULL);
	if (tree->left)
	{
		tmp = tree->left;
		if (tmp->right)
		{
			tmp->right->parent = tree;
			tree->left = tmp->right;
		}
		else
			tree->left = NULL;
		tmp->right = tree;
		tmp->parent = NULL;
		tree->parent = tmp;
		return (tmp);
	}
	return (tree);
}
