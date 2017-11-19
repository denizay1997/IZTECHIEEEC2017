#include <stdio.h>

int main()
{
   float turkishlira;
   float dolar;
   float euro;
   float sterling;
   printf("What is your salary in turkish lira? \n");
   scanf("%f", &turkishlira);
   dolar =turkishlira / 3.87;
   euro =turkishlira / 4.57;
   sterling = turkishlira / 5.12;
   printf("your salary is : %f dolar\n",dolar);
   printf("your salary is : %f euro\n",euro);
   printf("your salary is : %f sterling",sterling);
   return 0;
}
