#include "binary_trees.h"
/**
* binary_tree_rotate_left - rotates binary tree to left
* @tree: Pointer to the root node .
* Return: rotated tree new node's pointer
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *tmp;

	if (!tree)
		return (NULL);
	if (tree->right)
	{
		tmp = tree->right;
		if (tmp->left)
		{
			tmp->left->parent = tree;
			tree->right = tmp->left;
		}
		else
			tree->right = NULL;
		tmp->left = tree;
		tmp->parent = NULL;
		tree->parent = tmp;
		return (tmp);
	}
	return (tree);
}
