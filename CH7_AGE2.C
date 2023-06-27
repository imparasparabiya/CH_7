#include<stdio.h>
#include<conio.h>

main()

{
  int age;

  clrscr();
  printf("Enter You age = ");
  scanf("%d",&age);

  if(age<18 && age>=0)
  {
    printf("Your not Eligibal for Voting\n");
  }
  else if(age == 18)
  {
    printf("Your are also Eligibal For Voting\n");
  }
  else if(age>18)
  {
    printf("Your are Eligibal for Voting\n");
  }
  else
  {
    printf("Plz Enter a Velid Age.....");
  }

  getch();





}