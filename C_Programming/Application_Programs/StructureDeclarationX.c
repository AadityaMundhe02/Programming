#include<stdio.h>

struct Demo
{
    int i;      // 4
    char ch;    // 1   Generates Padding
    float f;    // 4  
};              // 12

int main()
{
    struct Demo dobj;
    
    printf("%lu\n",sizeof(dobj));

    return 0;
}