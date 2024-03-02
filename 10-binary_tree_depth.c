#include "binary_trees.h"
/**
 * binary_tree_depth - measures depth
 * @tree: depth to calculate
 *
 *  Return: depth of node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		d++;
		tree = tree->parent;
	}

	return (d);
}
