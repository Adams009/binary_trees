#include "binary_trees.h"
/**
 * binary_tree_height - measures the height
 * @tree: tree to measure
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_b;
	size_t right_b;

	if (tree == NULL)
		return (0);

	left_b = binary_tree_height(tree->left);
	right_b = binary_tree_height(tree->right);

	return (1 + (left_b > right_b ? left_b : right_b));
}
