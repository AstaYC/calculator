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


    if (o == '+'){
        s = a + b ;
        printf ( "donc la somme du a et b c'est : %.1f", s);
    }
    else if (o == '-'){
        m = a - b ;
        printf("donc le soustraction de a et b = %.1f", m);
    }
    else if (o == '*'){
        mu = a * b ;
        printf("donc la a * b = %.1f", mu);
    }
    else if ( o == '/'){
        d = a / b ;
        printf (" donc a / b = %.1f", d);
    }

    return 0;
}
