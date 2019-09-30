#include <stdio.h>
#include <limits.h>
int main ()
{
       unsigned long  int a = 50000; // 50,000
       unsigned long  int b = 1000000; // 1, 000 ,000
       unsigned long  int c = a*b; // kaads ir sgaidaams rezultaats?

      printf ("int datu tipa izmers ir: %ld  baiti \n", sizeof (int) );
      printf (" Apreekjinam a un b reizinaajumu :\n" );
      printf ("a = %ld, b = %ld \n", a, b);
      printf ("c = a *b = %ld * %ld = %ld \n", a,b,c ); // rrezultaats uz ekraana
} 
