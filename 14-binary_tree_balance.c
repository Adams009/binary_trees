#include "binary_trees.h"
/**
 * binary_tree_height - Measures height
 * @tree: tree to look
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lt = 0;
	size_t rt = 0;

	if (tree == NULL)
		return (0);

	lt = binary_tree_height(tree->left);
	rt = binary_tree_height(tree->right);

	return (1 + (lt > rt ? lt : rt));
}

/**
 * binary_tree_balance - Measures balance
 * @tree: tree
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l = 0;
	int r = 0;
	int t = 0;

	if (tree == NULL)
		return (0);

	l = ((int)binary_tree_height(tree->left));
	r = ((int)binary_tree_height(tree->right));
	t = l - r;

	return (t);
}
