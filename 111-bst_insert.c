#include "binary_trees.h"
/**
 *bst_insert - function that instert a value in a bst
 *@tree: double pointer to root node of bst
 *@value: value to insert
 *Return: pointer to insertad node of null if fail
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *i;

	if (!tree)
		return (NULL);
	if (!*tree)
		return (*tree = binary_tree_node(NULL, value));
	i = *tree;
	while (1)
	{
		if (value == i->n)
			return (NULL);
		else if (value < i->n && i->left)
			i = i->left;
		else if (value < i->n)
			return (i->left = binary_tree_node(i, value));
		else if (value > i->n && i->right)
			i = i->right;
		else
			return (i->right = binary_tree_node(i, value));
	}
}


