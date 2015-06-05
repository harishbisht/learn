#include<stdio.h>
#include<conio.h>
long long sum_of_digits(long long);
int main(int args, int argv)
{
    int i=sum_of_digits(987654321);
    printf("%d",i);


getch();
 return 0;
}
long long sum_of_digits(long long input)
{
  long long total=0;
   while(input!=0)
   { total+=input%10;
     input/=10;
   }
  return total;
}