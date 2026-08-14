#include<stdio.h>

int main()
{
    int i = 11;
    const int j = 21;
    
    i++;    // Allowed
    j--;    // Not Allowed

    // j = j + 1

    return 0;
}