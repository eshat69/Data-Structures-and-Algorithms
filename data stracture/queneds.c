#include<stdio.h>
#include<stdbool.h>
#define CAPACITY 5
int ourQueue[CAPACITY] ;
int front = 0 , rear = -1 ,totalItem = 0 ;
bool isFull() {
	if(totalItem == CAPACITY) {
		return true ;
	}
	return false ;
}
bool isEmpty() {
	if(totalItem == 0){
		return true ;
	}
	return false ;
}

void enqueue (int item) {
	if(isFull()){
		printf("sorry! the queue is full\n");
		return ;
	}
	rear = (rear +1) % CAPACITY ;
	ourQueue[rear] = item ;
	totalItem++ ;
}
int dequeue () {
	if(isEmpty()){
		printf("sorry! the queue is empty");
		return -1 ;
	}
	int frontItem = ourQueue[front];
	ourQueue[front]=-1;
	front = (front +1)%CAPACITY ;
	totalItem--;
	return frontItem ;
}
void printQueue() {
	int i ;
	printf("queue :");
	for(i=0 ; i<CAPACITY ; i++) {
		printf("%d",ourQueue[i]);
	}
	printf("\n");
}

int main () {
	printf("let's implement our queue");
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	printQueue();
	enqueue(50);
	printQueue();
	enqueue(60);
	printf("deque : %d\n",dequeue());
	printfQueue();
	enqueue(60);
	printQueue();
	return 0 ;
}
