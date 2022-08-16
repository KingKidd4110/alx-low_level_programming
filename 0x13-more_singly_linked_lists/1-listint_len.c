/**
 * listint_len - returns number of elements in listint_t
 * @h: pointer to string
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int data;

	Node *current_node = h;

	while (current_node != NULL)
	{
		printf("%d" current_node->data);

		current_node = current_node->next;
	}
	return (data)
}
