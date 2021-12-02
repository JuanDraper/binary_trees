#include "binary_trees.h"
/**
 *array_to_bst - converts an array into an bst
 *@array: pointer to first elelment of array to convert
 *@size: size of array
 *Return: pointer to the root node of newly created bst
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t i;
	bst_t *node = NULL;

	for (i = 0; i < size; i++)
		bst_insert(&node, array[i]);
	return (node);
}
