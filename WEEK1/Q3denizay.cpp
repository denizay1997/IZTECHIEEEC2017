#include <stdio.h>

int main()
{
   int numberone;
   int numbertwo;
   int addition;
   int substraction;
   float multiplication;
   float division;
   printf("What is your favorite number1? \n");
   scanf("%d", &numberone);
   printf("What is your favorite number2? \n");
   scanf("%d",&numbertwo);
   addition = numberone+numbertwo;
   substraction =numberone-numbertwo;
   multiplication = numberone*numbertwo;
   division = numberone/numbertwo;
   printf("numberone + numbertwo : %d\n",addition);
   printf("numberone - numbertwo : %d\n",substraction);
   printf("numberone * numbertwo : %f\n",multiplication);
   printf("numberone / numbertwo : %f",division);
   return 0;
}
