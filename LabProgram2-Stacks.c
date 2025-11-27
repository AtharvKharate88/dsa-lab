#include <stdio.h>

int stack[10];
int top =- 1;

void push(int value)
{
    if (top==9)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = value;
        printf("%d pushed into stack\n",value);
    }
}

void pop()
{
    if (top==-1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("%d popped from stack\n",stack[top]);
        top--;
    }
}

void display()
{
    if (top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements are: \n");
        for (int i= top; i>0; i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}

int main()
{
    push(5);
    push(10);
    push(15);
    display();

    pop();
    display();

    pop();
    pop();
    pop();
    return 0;
}
