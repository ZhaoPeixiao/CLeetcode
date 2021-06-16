//
// Created by Peixiao on 2021/6/16.
//

#ifndef HW_LEETCODE752_H
#define HW_LEETCODE752_H

#endif //HW_LEETCODE752_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int visited[10000] = {0};

struct Queue{
    int front, rear, size;
    unsigned capacity;
    int* array;
};

struct Queue* createQueue(unsigned capacity){
    struct Queue* queue = (struct Queue*)malloc(
            sizeof(struct Queue));
    queue->capacity = capacity;
    queue->front = queue->size = 0;

    queue->rear = capacity - 1;
    queue->array = (int*)malloc(
            queue->capacity * sizeof(int));
    return queue;
}

// Queue is full when size becomes
// equal to the capacity
int isFull(struct Queue* queue)
{
    return (queue->size == queue->capacity);
}

// Queue is empty when size is 0
int isEmpty(struct Queue* queue)
{
    return (queue->size == 0);
}

// Function to add an item to the queue.
// It changes rear and size
void push(struct Queue* queue, int item)
{
    if (isFull(queue))
        return;
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->array[queue->rear] = item;
    queue->size = queue->size + 1;
}

int front(struct Queue* queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    return queue->array[queue->front];
}

void pop(struct Queue* queue){
    if (isEmpty(queue)){
        return;
    }
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size = queue->size - 1;
}

int openLock()
{
    // please define the C input here. For example: int n; scanf("%d",&n);
    int deadends_size;
    scanf("%d", &deadends_size);
    char** deadends = (char**) malloc(deadends_size * sizeof(char*));
    for (int i = 0; i < deadends_size; i++) {
        deadends[i] = (char*) malloc(5 * sizeof(char));
        scanf("%s", deadends[i]);
        visited[atoi(deadends[i])] = 1;
    }
    char* target = (char *) malloc(5 * sizeof(char));
    scanf("%s", target);
    // please finish the function body here.
    if(visited[0] == 1){
        printf("-1");
        return 0;
    }
    int res = 0, target_in_num = atoi(target);
    struct Queue* queue = createQueue(1000);
    push(queue, 0);
    int queueSize = 0;
    while (!isEmpty(queue)) {
        queueSize = queue->size;
        while (queueSize--){
            int current = front(queue);
            pop(queue);
            if (current == target_in_num) {
                printf("%d", res);
                return 0;
            }
            for (int p = 1; p < 10000; p *= 10) {
                int dist = current / p % 10;
                for (int dir = -1; dir <= 1; dir += 2) {
                    int new_dd = current - dist * p + (10 + dist + dir) %10 * p;
                    if (visited[new_dd] == 0) {
                        visited[new_dd] = 1;
                        push(queue, new_dd);
                    }
                }
            }
        }
        res++;
    }

    printf("-1");
    return 0;
}