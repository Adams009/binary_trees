#include "binary_trees.h"

/**
 * binary_tree_node - Creates binary tree
 * @parent: - is a pointer to the parent node
 * @value: - is the value to put in the new node
 * Return: a pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
