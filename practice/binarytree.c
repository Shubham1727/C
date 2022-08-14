#include <stdio.h>
#include <stdlib.h>

typedef struct node *nodeptr;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *newnode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
};

int insert(nodeptr root, int data)
{
    nodeptr temp = root;
    nodeptr newnodes = newnode(data);

    if (temp == 0)
    {
        return newnodes;
    }
    else
    {
        while (temp != 0)
        {
            if (data > temp->data)
            {
                if (temp->right == NULL)
                {
                    temp->right = newnodes;
                    return root;
                }
                else
                    temp = temp->right;
            }

            else if (data < temp->data)
            {
                if (temp->left == NULL)
                {
                    temp->left = newnodes;
                    return root;
                }
            }
            else
                temp = temp->left;
        }
    }
}
int nodecount(struct node *root)
{
    int count;
    if (root != NULL)
    {
        nodecount(root->left);
        count++;
        nodecount(root->right);
    }
}

int main()
{
    
}
