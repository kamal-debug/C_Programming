#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num,choose,a,b;

    printf("Operations to be Performed-:\n");
    printf("1.Additon\n");
    printf("2.Subtarction\n");
    printf("3.Multiply\n");
    printf("4.Divide\n");
    printf("Choose Operation:\n");

    scanf("%d",&choose);

    printf("Enter two number:\n");
    scanf("%d%d",&a,&b);

    switch (choose)
    {
    case 1:
        printf("You Choose Addition:-\n");
        printf("Addition is:%d\n",a+b);
        break;
    case 2:
        printf("You choose Subtarction:-\n");
        printf("subtraction is:%d\n",a-b);
        break;
    case 3:
        printf("You choose Multiplication:-\n");
        printf("Multiplication is:%d\n",a*b);
        break;
    case 4:
        printf("You choose Divide:-\n");
        printf("Divide is:%f\n",(float)a/b);
        break;

    default:
        printf("Operation failed\n");
        break;
    }


    return 0;
}
