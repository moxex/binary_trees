#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree with no children
 * @parent: A pointer also known as the root node
 * @value: The integer value to be assigned to the new tree
 * Return: returns the location to the parent
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	struct binary_tree_s *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	return (new_node);

}
