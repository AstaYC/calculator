#include <stdio.h>
#include <stdlib.h>

int main()
{
        float a , b , s , m , mu , d;
    char o ;

    printf("veuillez enter le nombre a  : \n");
    scanf("%f", &a);
    printf("veuiller enter le nombre b : \n");
    scanf("%f",&b);
    printf("veuiller enter le operateur du clacul : \n");
    scanf (" %c", &o);

    switch (o){
    case '+' : printf("a + b = %.1f", a + b);
               break ;
    case '-' : printf("a - b = %.1f", a - b);
               break ;
    case '*' : printf("a * b = %.1f", a * b);
               break ;
    case '/' : printf("a / b = %.1f", a / b);
               break ;
    default :  printf(" khay diali ach had laajeb li dekhlty");
               break ;
    }
    return 0;
}
