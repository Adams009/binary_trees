#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert to the left
 *
 * @parent: the parent pointer
 * @value: the value to insert
 *
 * Return: a pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left;

	if (!parent)
		return (NULL);

	new_left = malloc(sizeof(binary_tree_t));
	if (new_left == NULL)
		return (NULL);

	new_left->n = value;
	new_left->parent = parent;
	new_left->right = NULL;
	new_left->left = parent->left;

	if (new_left->left != NULL)
		new_left->left->parent = new_left;
	parent->left = new_left;

	return (new_left);
}
