#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree
 * @tree: a pointer to the root node
 * @func: a pointer to the function
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
		if (!tree || !func)
		return;
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
}
