#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   int max;
   int min;
   int flag=0;

   do{
    printf("Ingrese un numero: ");
    scanf("%d",&num);
    if(flag==0 || num>max)
    {
        max=num;
    }
    if(flag==0 || num<min)
    {
        min=num;
        flag=1;
    }
   }while(num!=-1);
   printf("El numero maximo es %d",max);
}
