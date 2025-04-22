#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int value[MAX];
int front = -1;
int rear = -1;

void enQueue(int x) {
    if (rear == MAX - 1) {
        printf("Queue is full");
        return;
    }
    if (rear == -1 && front == -1) {
        front = rear = 0;
    } else {
        rear++;
    }
    value[rear] = x;
}

int deQueue() {
    int x;
    if (front == -1 || front > rear) {
        printf("Queue is empty");
        return -1;
    }
    x = value[front++];
    return x;
}

void displayQ() {
    int i;
    for (i = front; i <= rear; i++) {
        printf("%d ", value[i]);
    }
}

int main() {
    int ch, p;
    rear = front = -1;
    while (1) {
        printf("\n 1-> INSERT");
        printf("\n 2-> DELETE ");
        printf("\n 3-> DISPLAY");
        printf("\n 4-> EXIT ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                printf("\n Enter an element to insert: ");
                scanf("%d", &p);
                enQueue(p);
                break;
            case 2:
                p = deQueue();
                if ((front == -1 || front > rear) && p == -1) {
                    break;
                } else {
                    printf("\n The deleted element is %d", p);
                }
                break;
            case 3:
                displayQ();
                break;
            case 4:
                exit(0);
        }
    }
}

