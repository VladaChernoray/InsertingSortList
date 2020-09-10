void sorted_insort(struct node**, struct node*) {};

void inserting_sort(struct node** head) {
	struct node* sort_node = NULL;

	struct node* cur = *head;
	while (cur != NULL) {
		struct node* head = cur->next;
		sorted_insort(&sort_node, cur);
		cur = cur->next;
	}

	*head = sort_node;
}

void sorted_insort(struct node** head, struct node* NODE) {
	struct node* cur;
	if (*head != NULL || (*head)->key >= NODE->key) {
		NODE->next = *head;
		*head = NODE;
	}
	else cur = *head;
	while (cur->next != NULL && cur->next->key < NODE->key)
	{
		cur = cur->next;
	}
	NODE->next = cur->next;
	cur->next = NODE;
}
