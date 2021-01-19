#include <stdio.h>

#include <stdlib.h>

struct node
{

    int data;
    struct node *link;
};

struct node *p;

void append(struct node *q, int num)
{

    struct node *temp, *r;

    if (q == NULL)
    {
        printf("Creating List\n");
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = num;
        temp->link = NULL;
        p = temp;
        q = temp;
    }
    else
    {
        r = q;
        while (r->link != NULL)
            r = r->link;

        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = num;
        temp->link = NULL;
        r->link = temp;
    }
}

void inbegin(struct node *q, int num)
{

    struct node *temp;
    if (q == NULL)
        printf("Link List Does Not Exists\n");
    else
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = num;
        temp->link = p;
        p = temp;
    }
}

void delet(struct node *q, int num)
{
    struct node *prev, *curr;
    int found = 0;
    prev = NULL;

    if (q == NULL)
        printf("list does not exist");

    else
    {
        for (curr = q; curr != NULL; prev = curr, curr = curr->link)
        {
            if (curr->data == num)
            {
                if (prev == NULL)
                {
                    p = curr->link;
                    found = 1;
                }

                else
                {
                    prev->link = curr->link;
                    found = 1;
                }
            }
        }

        if (found == 1)
            printf("no deleted\n");

        else
            printf("not found\n");
    }
}

void count(struct node *q)
{

    int c;
    c = 0;
    if (q == NULL)
        printf("Link List Does Not Exists");
    else
    {

        while (q != NULL)
        {

            c++;
            q = q->link;
        }

        printf("Number Of Nodes %d\n", c);
    }
}

void display(struct node *q)
{

    if (q == NULL)
        printf("Link List Does Not Exists\n");
    else
    {

        printf("Contents:\n");
        while (q != NULL)
        {

            printf("%d\n", q->data);
            q = q->link;
        }
    }
}

int main()
{

    int n, c;
    p = NULL;

    do
    {

        printf("Enter Your Choice:\n");
        printf("1.Create\\Append\t");

        printf("\t2.Begin\t");
        printf("\t3.Delete\t");
        printf("\t4.Count\t");
        printf("\t5.Display\t");
        printf("\t6.Exit\n");
        scanf("%d", &c);
        switch (c)
        {

        case 1:
            printf("Enter A Value:\n");
            scanf("%d", &n);
            append(p, n);
            break;
        case 2:
            printf("Enter A Value:\n");
            scanf("%d", &n);
            inbegin(p, n);
            break;
        case 3:
            printf("Enter A Value:\n");
            scanf("%d", &n);
            delet(p, n);
            break;
        case 4:

            count(p);
            break;
        case 5:
            display(p);
            break;
        }
    } while (c != 6);
    return 0;
}

