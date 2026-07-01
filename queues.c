//Queue
#include<stdio.h>
#define MAX 5

int queue [MAX];
int front=-1, rear=-1;

int enqueue(x) {
	if(rear == MAX-1) {
		printf("The Q is full!!");
	}
	else{
		if(front==-1) front=0;
		rear++;
	    queue[rear] = x;
	    printf("%d has been Queued! \n", x);
	}
}

int dequeue(){
	if(rear==-1 && front==-1){
		printf("The Q is Empty!!\n");
		front=rear=-1;
	}
	else
	{
		front++;
		int x = queue[front];
		if(front==rear){
		front=rear=-1;
		};
		printf("%d has been dequeued! \n",x);
		return x;
	}
}

int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	enqueue(60);//full
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();//empty
}