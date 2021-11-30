#include "binary_trees.h"
/*
 *binary_tree_depth - meassures the depth of a node
 *tree: pointer to the node to meassure
 *Return: the depth of the node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (!tree)
		return (0);
	while((tree = tree->parent))
		d++;
	return (d);
}
