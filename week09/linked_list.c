#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "list.h"

#define IDENTICAL 1
#define NOT_IDENTICAL 0

struct node {
    int data;
    struct node *next;
};

/** HELPER FUNCTIONS **/
// Creates a linked list from the given array of values
struct node *create_list(int values[], int size);
// Creates a node with the given data item
struct node *create_node(int data);
// Print out the linked list starting at head
void print_list(struct node *head);


// deletes first node in a linked list and returns the new head
struct node *delete_first(struct node *head) {

    // create temp pointer to track first node
    struct node *temp = head;

    // update new head
    head = head->next;

    // delete first node (aka free())
    free(temp);

    // return head
    return head;
}






// delete all nodes from linked list
struct node *delete_list(struct node *head) {

    // create pointer to iterate list
    struct node *curr = head;
    struct node *to_delete = NULL;

    while (curr != NULL) {
        to_delete = curr;
        curr = curr->next;
        free(to_delete);
    }
    head = NULL;
    return head;
}






// copy all nodes from a linked list and return the new head
struct node *copy(struct node *old_head) {

    // empty list
    if (old_head == NULL) {
        return NULL;
    }
    struct node *old_curr = old_head;
    struct node *new_head = create_node(old_curr->data);
    struct node *new_prev = new_head;
    old_curr = old_curr->next;

    while (old_curr != NULL) {
        struct node *new = create_node(old_curr->data);
        new_prev->next = new;
        old_curr = old_curr->next;
        new_prev = new_prev->next;
    }

    // return new head
    return new_head;
}





// create a new list which is a combination of first_list + second_list
struct node *list_append(struct node *first_list, struct node *second_list) {

    // create copy of first list
    struct node *first_copy_head = copy(first_list);
    // create copy of second list
    struct node *second_copy_head = copy(second_list);

    // first list is empty
    if (first_copy_head == NULL) {
        return second_copy_head;
    }

    // go to end of first copied list
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = second_copy_head;
    return first_copy_head;
 
}



// ================================= HELPERS

// creates a struct node with the given data value
// returns a pointer to this node
struct node *create_node(int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    return new;
}

// given an array of integer values for data items
// returns the head of a linked list with these values
// in the order as they appear in the array
// size gives the size of the array
struct node *create_list(int values[], int size) {
    int i = 0;

    if (size <= 0) {
        // empty linked list (or invalid size)
        return NULL;
    }

    struct node *head = NULL;   // head of the linked list
    struct node *tmp = NULL;    // temporary item we're working with
    struct node *curr = NULL;   // current node we're looking at in the linked list

    while (i < size) {
        tmp = create_node(values[i]);

        // link this node onto our list
        if (head == NULL) {
            // this is the first node in the list
            head = tmp;
            curr = head;
        } else {
            // this is not the first node in the list
            // add it to the end, i.e. after curr
            curr->next = tmp;

            // reset curr to point at the new last node
            curr = tmp;
        }
        i = i + 1;
    }

    return head;
}

// prints out the list given the head of a list
void print_list(struct node *head) {
    struct node *curr;
    curr = head;

    while (curr != NULL) {
        printf("[ %d ]-->", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");

}
