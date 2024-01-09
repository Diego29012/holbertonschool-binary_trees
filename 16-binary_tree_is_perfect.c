#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if the binary tree is perfect
 * @tree: the binary tree
 * Return: the perfection of the binary tree
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int height_left, height_right;

    if (tree == NULL)
        return (0);

    height_left = binary_tree_height(tree->left);
    height_right = binary_tree_height(tree->right);

    if (height_left == height_right)
    {
        if (tree->left == NULL && tree->right == NULL)
            return (1);
        return (binary_tree_is_perfect(tree->left) &&
                binary_tree_is_perfect(tree->right));
    }

    return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: the height of the binary tree in nodes, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t height_left, height_right;

    if (tree == NULL)
        return (0);

    height_left = binary_tree_height(tree->left);
    height_right = binary_tree_height(tree->right);

    return (1 + (height_left > height_right ? height_left : height_right));
}
