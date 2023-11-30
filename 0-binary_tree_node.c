/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent of the node.
 * @value: The value to put in the new node.
 *
 * This function creates a new binary tree node with the given value
 * and assigns the specified parent to it. It allocates memory for the new node,
 * initializes its values, and returns a pointer to the new node.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)

{
    /* Allocate memory for a new binary_tree_t node*/
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
	/* If malloc fails, return NULL indicating an error*/
	return (NULL);
	}

	/*Initialize the newly created node with the provided value and parent*/
	new->n = value;/*Set the value of the node*/
	new->parent = parent;/* Set the parent of the node*/
	new->left = NULL;
	new->right = NULL;

	/*Return a pointer to the newly created node*/
	return (new);
}
