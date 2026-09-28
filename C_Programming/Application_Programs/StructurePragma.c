#include<stdio.h>

// Declaration of Pragma pack

#pragma pack(1)
struct Demo
{
    int i;      // 4
    char ch;    // 1    Generates Padding
    float f;    // 4
};              // 9

int main()
{
    struct Demo dobj;

    printf("%lu\n",sizeof(dobj));
    
    return 0;
}