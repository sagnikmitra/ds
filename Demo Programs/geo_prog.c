//C PROGRAM TO PRINT ELEMENTS AND SUM OF A GEOMETRIC PROGRESSION
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
  //HERE LONG INT IS USED BECAUSE RANGE OF INTEGER IS NOT THAT HUGE THAT WE WOULD EXPECT FROM THE SUM OUTPUT
  long int a=0, temp=0, r=0, n=0, s=1, i=0;
  printf("ENTER INITIAL NUMBER\n");
  scanf("%d",&a);
  temp = a;
  printf("ENTER VALUE OF R\n");
  scanf("%d",&r);
  printf("ENTER NUMBER OF ELEMENTS\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("%d ",a);
    a=a*r;
  }
  s = temp*(pow(r,n)-1)/(r-1);
  printf("SUM IS %d",s);
  return 0;
}
