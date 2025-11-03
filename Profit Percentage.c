#include<stdio.h>
int main()
{
  double cp,sp;
  scanf("%lf %lf",&cp,&sp);
  printf("%.2lf",((sp-cp)/cp)*100);
  return 0;
}
