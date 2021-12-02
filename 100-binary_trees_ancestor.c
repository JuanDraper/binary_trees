#include "binary_trees.h"
/**
 *binary_tree_depth - meassures the depth of a node
 *@tree: pointer to the node to meassure
 *Return: the depth of the node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (!tree)
		return (0);
	while ((tree = tree->parent))
		d++;
	return (d);
}
/**
 *binary_trees_ancestor - function that finds lowest common ancestor
 *@first: pointer to first node
 *@second: pointer to second node
 *Return: pointer to lowest common ancestor of the two nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);
	while (binary_tree_depth(first) > binary_tree_depth(second))
		first = first->parent;
	while (binary_tree_depth(second) > binary_tree_depth(first))
		second = second->parent;
	while (first != second)
	{
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
}
