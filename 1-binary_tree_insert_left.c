#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node in the left of the parent
 * @parent: parent node
 * @value: value of n
 * Return: the newly created left node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp = NULL;


	if (!parent)
		return (NULL);
	if (parent->left)
		tmp = parent->left;
	parent->left = binary_tree_node(parent, value);
	if (tmp)
	{
		parent->left->left = tmp;
		tmp->parent = parent->left;
	}
	return (parent->left);
}

