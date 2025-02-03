#include<stdio.h>
#include<conio.h>
void main()
{
char c,ch;
FILE *p,*k; clrscr();
p=fopen("a1z.txt","r");
  while((c=getc(p)!=EOF)
    printf("%c",c);
  fcloseall();
  printf("\nEnter which type of product you want  ");
  scanf("%c",&ch);clrscr();
  k=fopen("a2z.txt","r");
  while((c=getc(k))1=EOF)
    {
    if(c==ch)
    {
      printf("\n%d",i);
      while((c=getc(k))1='.')
        printf("%c",c);
      break;
        }
    } fcloseall();
  getch();
}
