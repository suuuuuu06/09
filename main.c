#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define SIZE 5
int main(void)
{
   int i,average,sum=0;
   int grade[SIZE];
   
   for(i=0; i<SIZE; i++)
   {
      printf("�л� ������ �Է��ϼ��� : ");
      scanf("%d",&grade[i]);
      sum+=grade[i];
   }
   
   average=sum/SIZE;
   printf("���� ��� : %d\n",average);
   
   return 0;
}
