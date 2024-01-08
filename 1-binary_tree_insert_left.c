#include "binary_trees.h"

/**
 * binary_tree_insert_left - Binary tree node
 * @parent: Pointer to the parent node
 * @value: Value inside the node.
 * Return: Pointer node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	if (!parent)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (parent->left == NULL)
	{
		parent->left = newNode;
	}
	else if (parent->left != NULL)
	{
	newNode->left = parent->left;
	parent->left = newNode;
	newNode->left->parent = newNode;
	}
	return (newNode);
}
