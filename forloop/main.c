#include <stdio.h>

int main(void) 
{
   printf("Dieses Programm liest eine Zahl ein und gibt anschließend entsprechend oft \"Hello World\" aus.\n\n");
   int mal;
   printf("Wie oft soll \"Hello World\" ausgegeben werden: ");
   scanf("%d",&mal);
   for(int i = 1 ; i <= mal;i++)
   {   
    printf("Hello World (%d. Mal)\n",i);
   }
  return 0;
}