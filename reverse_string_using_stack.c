/*
This is a c program to reverse a string using stack...Thereisn't any stack available so first built your own type
*/

#include <stdio.h>
#include <string.h>

// note that stack has data of specific length and is not handling error scenarios
typedef struct stackDataType {
  char data[20];
  int top;
} stack;

void push(stack* s, int data) {
  s->data[++(s->top)] = data;
}

bool empty(stack* s) {
  return s->top == -1;
}

void pop(stack* s) {
  if(!empty(s)) {
    s->top = s->top - 1;
  }
}

int top(stack* s) {
  return s->data[s->top];
}

int main() {
  char input[15];
  stack s;
  s.top = -1;

  printf("This program will reverse a string using stacks in c\n");
  printf("Enter the string that you want to reverse\n");
  scanf("%s", input);
  
  for(int i=0; i<strlen(input); i++) {
    push(&s, input[i]);
  } 
  
  while(!empty(&s)) {
    printf("%c", top(&s));
    pop(&s);
  }
  
  printf("\n"); 
 
}
