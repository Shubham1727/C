#include<stdio.h>
#include<stdlib.h>

struct queue 
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;    
}

int isFull(struct queue *q)
{
    if (q->r == q->size-1)
    {
        return 1;
    }
    return 0;    
}

void enqueue(struct queue *q , int val)
{
    if (isFull)
    {
        printf("the queue is full");
    }
    else
    {
        q->r++;
        q->arr[q->r-1]=val;
        printf("inserted %d", val);
    }   
    
}

int dequeue(struct queue *q , int val)
{
    int a= -1;
    if (isEmpty)
    {
        printf("the queue is empty");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;      
}

int main(){

    struct  queue q;
      q.size =  100;
      q.f = -1;
      q.r = -1;
      q.arr = (int *) malloc(q.size* sizeof(int));



}



