#include <stdio.h>
#include <stdlib.h>

struct circular_queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct circular_queue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    return 0;
}

int isFull(struct circular_queue *q)
{
    if ((q->r + 1) % q->size == q->size)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct circular_queue *q, int val)
{
    if (isFull(q))
    {
        printf("queue is full");
    }
    else
    {
        q->r = (q->r + 1) % q->size ;
        q->arr[q->r]= val;
        printf("enqued %d" , val);
    }    
}

int dequeue(struct circular_queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("queue is empty");
    }
    else
    {
       q->f = (q->f +1)%q->size;
        a = q->arr[q->f]; 
    }
    return a;
}

int main()
{
    struct circular_queue q;
    q.size = 3;
    q.f = q.r = 1;
    q.arr = (int *)malloc(q.size * sizeof(int));

}
