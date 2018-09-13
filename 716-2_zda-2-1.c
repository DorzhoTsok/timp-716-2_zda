#include <stdio.h>

int main()
{
 long int n=0;
 long int check=0;
 long int a=0;
 scanf("%li", &n);
 for (int i=1; i<=n; i++)
 {
 scanf("%li", &a);
 if (a<0)
 check++;
 }
 printf("%li" "\n", check);
 return 0;
}
