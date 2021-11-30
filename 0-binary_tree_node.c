#include "binary_trees.h"
/**
 * binary_tree_node - will create a new node in the treee
 * @parent: parent node
 * @value: value to insert in new node
 * Return: the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nw;


	nw = malloc(sizeof(binary_tree_t));
	if (!nw)
		return (NULL);
	nw->parent = parent;
	nw->left = NULL;
	nw->right = NULL;
	nw->n = value;
	return (nw);
}

