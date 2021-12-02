#include "binary_trees.h"
/**
 *bst_search - searches a value in a bst
 *@tree: pointer to root node of bst
 *@value:value to search for
 *Return: pointer to the node where the value is
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);
	while (tree)
	{
		if (value == tree->n)
			return ((bst_t *)tree);
		else if (value < tree->n)
			tree = tree->left;
		else
			tree = tree->right;
	}
	return (NULL);
}

