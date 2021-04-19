#include<stdio.h>


#define size 5

int A[size];
int top;

void clear() {
	top = -1;
}

void push() {
	if(top == size - 1) {
	  printf("The stack is full\n");
	  return ;
	}
	int x;
	printf("Enter a number to push on the stack: ");
	scanf("%d", &x);
	top++;
	A[top] = x;
}

void pop() {
	if(top == -1) {
	  printf("The stack is empty\n");
	  return;
	}
	int x;
	x = A[top];
	top--;
	printf("The top element of the stack is: %d\n", x);
}

void display() {
	if(top == -1) {
	  printf("The stack is empty\n");
	  return;
	}
	int i;
	for(i = 0; i <= top; i++)
	  printf("%d ", A[i]);
	printf("\n");
}

void displaySum() {
	if(top == -1) {
		printf("The stack is empty\n");
		return;
	}
	int sum = 0;
	for(int i = 0; i <= top; i++)
		sum += A[i];
	printf("Sum = %d\n", sum);
}

int main() {
	int ch;
	clear();
	do {
	  printf("Enter a choice from the following options: \n");
	  printf("1.Clear\n2.Push\n3.Pop\n4.Display\n5.Display Sum\n6.Exit");
	  printf("Enter your choice here: ");
	  scanf("%d", &ch);
	  switch (ch) {
	    case 1:
	      clear();
	      break;
	    case 2:
	      push();
	      break;
	    case 3:
	      pop();
	      break;
	    case 4:
	      display();
	      break;
      	case 5:
	      displaySum();
	      break;
	  }
	}while(ch != 6);
	return 0;
}
