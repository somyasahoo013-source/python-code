#include <stdio.h>
#include <stdlib.h>

// Structure
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *start = NULL;

void addatbeg(struct node *q, int num)
{
    struct node *start;

    start = (struct node*) malloc(sizeof(struct node));
    start->prev = NULL;
    start->data = num;
    start->next = q;

    if(q != NULL)
        q->prev = start;
}

void append(struct node *q, int num)
{
    struct node *s;

    if(q == NULL)
    {
        q = (struct node*) malloc(sizeof(struct node));
        q->prev = NULL;
        q->data = num;
        q->next = NULL;
    }
    else
    {
        while(q->next != NULL)
            q = q->next;

        s = (struct node*) malloc(sizeof(struct node));
        s->data = num;
        s->next = NULL;
        s->prev = q;

        q->next = s;
    }
}

void count(struct node *q){
    int c = 0;

    while(q != NULL){
        c++;
        q = q->next;
    }

    printf("Total no of nodes = %d", c);
}

void display(struct node *q){
    if(q == NULL){
        printf("Empty list");
    }
    else{
        printf("Doubly linked list elements are: ");

        while(q != NULL){
            printf("%d ", q->data);
            q = q->next;
        }
    }
}

void del(struct node *q, int num){
    struct node *temp;

    // Delete first node
    if(q->data == num){
        temp = q;
        q = q->next;

        if(q != NULL)
            q->prev = NULL;

        free(temp);
    }
    else{
        while(q != NULL){
            if(q->data == num){
                q->prev->next = q->next;

                if(q->next != NULL)
                    q->next->prev = q->prev;

                free(q);
                return;
            }
            q = q->next;
        }

        printf("Element not found");
    }
}

void addafter(struct node *q, int c, int num){
    struct node *temp;
    int i;

    for(i = 1; i < c; i++){
        q = q->next;

        if(q == NULL)
        {
            printf("There are less than %d elements", c);
            return;
        }
    }

    temp = (struct node*) malloc(sizeof(struct node));
    temp->data = num;

    temp->prev = q;
    temp->next = q->next;

    if(q->next != NULL)
        q->next->prev = temp;

    q->next = temp;
}

void search(struct node *q, int num){
    int flag = 0;

    if(q == NULL){
        printf("Can't search, empty list");
        return;
    }

    while(q != NULL){
        if(q->data == num){
            flag = 1;
            break;
        }
        q = q->next;
    }

    if(flag == 1)
        printf("Search element found");
    else
        printf("Search element not found");
}

void insert(struct node *f, struct node *r, int num){
    struct node *q;

    q = (struct node*) malloc(sizeof(struct node));
    q->data = num;

    // If list is empty
    if(f == NULL){
        f = q;
    }
    else{
        r->next = q;
    }

    r = q;
    r->next = f;   // Make it circular
}

void display(struct node *f, struct node *r){
    struct node *q = f;

    if(f == NULL){
        printf("Empty List\n");
    }
    else{
        printf("Circular linked list elements are: ");

        while(q != r){
            printf("%d ", q->data);
            q = q->next;
        }

        // Print last node
        printf("%d ", q->data);
    }
}


void del(struct node **f, struct node **r){
    struct node *q;
    int n;

    // If list is empty
    if(*f == NULL){
        printf("Empty Circular List\n");
        return;
    }

    // If only one node
    if(*f == *r){
        n = (*f)->data;
        free(*f);
        *f = NULL;
        *r = NULL;
    }
    else{
        q = *f;
        n = q->data;

        *f = (*f)->next;
        (*r)->next = *f;

        free(q);
    }

    printf("Deleted element = %d\n", n);
}

