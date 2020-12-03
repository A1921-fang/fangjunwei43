#ifndef stack_h
#define stack_h
#include<stdio.h>
#include<malloc.h>
#include<string.h>

typedef int dataType;
typedef struct linkStack{
        dataType data;
        struct linkStack * next;
}linkStack;
linkStack* push(linkStack * stack,dataType a);
linkStack * pop(linkStack * stack);
int priority(char x);
int data;

#endif
