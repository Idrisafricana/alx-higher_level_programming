#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * reverse_list - reverses a linked list
 * @head: pointer to the head of the list
 * Return: pointer to the new head of the reversed list
 */
listint_t *reverse_list(listint_t *head)
{
	listint_t *prev = NULL, *current = head, *next = NULL;
	while (current != NULL) 
	{
		next = current -> next;
		current -> next = prev;
		prev = current;
		current = next;
	}

	return prev;
}

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: pointer to the head of the list
 * Return: 1 if it is a palindrome, 0 otherwise
 */
int is_palindrome(listint_t **head)
{
	listint_t *slow = *head, *fast = *head, *second_half = NULL;

	if ( *head == NULL || ( *head) -> next == NULL)
		return 1;

	while (fast != NULL && fast -> next != NULL)
	{
		slow = slow -> next;
		fast = fast -> next -> next;
	}

// Reverse the second half of the list
second_half = reverse_list(slow);
// Compare the reversed second half with the first half
	while (second_half != NULL)
	{
		if (( * head) -> n != second_half -> n)
		{
		// Free the reversed list
		second_half = reverse_list(second_half);
		return 0;
		}
		*head = ( *head) -> next;
		second_half = second_half -> next;
	}
// Free the reversed list
	second_half = reverse_list(second_half);

	return (1)
}
