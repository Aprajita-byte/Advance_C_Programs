//Author Aprajita Sharma
//Program to make a simple calculator
//Date : 5/07/2022


#include <stdio.h>
#include<conio.h>
#include <string.h>
#include <math.h>


int main()
{
  float valueOne;
  float valueTwo;
  char operator;
  float answer;

  printf("Enter calculation:\n\n");
  scanf("%f %c %f", &valueOne, &operator, & valueTwo);

  switch(operator)
    {
    case '/': answer = valueOne/valueTwo;
      break;
    case '*': answer = valueOne*valueTwo;
      break;
    case '+': answer = valueOne+valueTwo;
      break;
    case '-': answer = valueOne-valueTwo;
      break;
    case '^': answer = pow(valueOne,valueTwo);
      break;
    default: printf("fail");
    }
  printf("%g%c%g =  %g\n\n",valueOne,operator, valueTwo, answer);
  getch();
}
