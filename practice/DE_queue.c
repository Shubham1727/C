#include <stdio.h>
#include <stdlib.h>

struct DEqueue
{
  int size;
  int f;
  int r;
  int *arr;
};

int isEmpty(struct DEqueue *q)
{
  if (q->r == q->f)
  {
    return 1;
  }

  return 0;
}

int isFull(struct DEqueue *q)
{
  if (q->r == q->size - 1)
  {
    return 1;
  }

  return 0;
}

void enqueueR(struct DEqueue *q, int val)
{
  if (isFull(q))
  {
    printf("The queue is full");
  }
  else
  {
    q->r++;
    val = q->arr[q->r - 1];
  }
}

void enqueueF(struct DEqueue *q, int val)
{
  if (q->f >= 0)
  {
    val = q->arr[q->f];
    q->f--;
  }
  else
  {
    printf("no space");
  }
}

int dequeueR(struct DEqueue *q)
{
  int a = -1;
  if (q->r>=0 && q->r <= q->size-1)
  {
    q->r++;
    a = q->arr[q->r - 1]; 
  }
  else
  {
    printf("empty queue");
  }

  return a;
}
int dequeueF(struct DEqueue *q)
{
  int a = -1;
  if (isEmpty(q))
  {
    printf("empty queue");
  }
  else
  {
    q->f++;
    a = q->arr[q->f - 1];
  }

  return a;
}
