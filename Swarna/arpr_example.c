#include <stdio.h>

int main ()
{

char amessage[] = "now is the time"; /* Attention you have created a "string literal" */

char *pmessage = "now is the time";  /* You are REUSING the string literal */


/* About arrays and pointers */

//pmessage = NULL; /* All right */
//amessage = NULL; /* Compilation ERROR!! */

printf ("%lu\n", sizeof (amessage)); /* Size of the string literal*/
printf ("%lu\n", sizeof (pmessage)); /* Size of pmessage is platform dependent - size of memory bus (1,2,4,8 bytes)*/

//printf ("%p, %p\n", pmessage, &pmessage);  /* These values are different !! */
//printf ("%p, %p\n", amessage, &amessage);  /* These values are THE SAME!!. There is no sense in retrieving "&amessage" */


/* About string literals */

/*if (pmessage == amessage)
{
   printf ("A string literal is defined only once. You are sharing space");

//   Demostration */
//   "now is the time"[0] = 'W';
  /* printf ("You have modified both!! %s == %s \n", amessage, pmessage);
}*/


/* Hope it was useful*/
return 0;
