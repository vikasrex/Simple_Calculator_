#include<stdio.h>
#include<math.h>
int main()
{
    float value1,value2;
    char operator;
    float answer;
    printf("Enter calculation:\n");
    scanf("%f%c%f",&value1,&operator,&value2);
    switch(operator)
    {
        case '/': answer = value1/value2;
        break;
        case '*': answer = value1*value2;
        break;
        case '+': answer = value1+value2;
        break;
        case '-': answer = value1-value2;
        break;
        default : printf("Fail.\n");
    }   printf("%.9g%c%.9g=%.6g\n\n",value1,operator, value2, answer);
}
