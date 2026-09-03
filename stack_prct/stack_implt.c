#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

typedef struct{
    int A[SIZE];
    int size ;
    int top ;
}Stack;

void init(Stack *s,int top){
    s->top=-1;
};

void push (Stack *s,int value) 
{
   if(s->top==s->size-1)
   {
    printf("stack is overflow");
   }
   s->top ++;
   s->A[s->top]=value;

};

int pop(Stack *s){
    int value;
    if(s->top==-1)
    {
        printf("stack is underflow");
        return -9999;
    }
     value = s->A[s->top];
    s->top --;
    return value;
}
int main()
{
   Stack s1,s2;
   init(&s1,3);
   init(&s2,6);

   push(&s2,2);
   push(&s2,6);
   push(&s2,8);

   printf("the popped value is %d\n",pop(&s2));
   printf("the 2nd popped value is %d\n",pop(&s2));

   return 0;
}