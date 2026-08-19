#include<stdio.h>

int Addition(int No1, int No2)
{
    int Ans = 0;
    
    Ans = No1 + No2;

    return Ans;
}

int main()
{
    int A = 0;
    int B = 0;
    int Ret = 0;

    printf("Enter First Number : ");
    scanf("%d",&A);

    printf("Enter Second Number : ");
    scanf("%d",&B);

    Ret = Addition(A,B);

    printf("Addition is : %d\n",Ret);

    return 0;
}