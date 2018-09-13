#include <stdio.h>
int main()
{
 long int n=0;
 long int scan=1;
 long int a=0;
 scanf("%li",  &n);
 for (int i=1; i<=n; i++)
 {
 scanf("%li", &a);
 scan*=a-i;
 }
 printf("%li" "\n", scan);
 return 0;
}
