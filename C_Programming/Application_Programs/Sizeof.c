#include<stdio.h>

int main()
{   
    char ch = 'A';
    int i = 11;
    float f = 90.99f;
    double d = 78.67890;

    printf("Size of All Variables is : \n");

    printf("%lu\n",sizeof(ch));
    printf("%lu\n",sizeof(i));
    printf("%lu\n",sizeof(f));
    printf("%lu\n",sizeof(d));

    return 0;
}