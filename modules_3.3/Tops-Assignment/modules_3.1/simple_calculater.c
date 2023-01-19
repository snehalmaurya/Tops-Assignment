// WAP to make simple calculator
#include <stdio.h>
void main()
{
  // Addition

  int add1, add2, addTotal;

  printf("Enter the numb for addition:");
  scanf("%d", &add1);

  printf("Enter the sec numb for addition:");
  scanf("%d", &add2);

  addTotal = add1 + add2;
  printf("Total %d + %d = %d\n", add1, add2, addTotal);

  // Substract
  int sub1, sub2, sub3;

  printf("Enter the numb for substract: ");
  scanf("%d", &sub1);

  printf("Enter the second numb for substract: ");
  scanf("%d", &sub2);

  sub3 = sub1 - sub2;
  printf("Total: %d\n", sub3);

  // Multiplication

  int multi1, multi2, multi3;
  printf("Enter the numb for multiplication: ");
  scanf("%d", &multi1);

  printf("Enter the second numb for multiplication: ");
  scanf("%d", &multi2);

  multi3 = multi1 * multi2;
  printf("Total: %d\n", multi3);

  // Division

  int num1, num2, num3;
  printf("Enter the numb for Division: ");
  scanf("%d", &num1);

  printf("Enter the second numb for Division: ");
  scanf("%d", &num2);

  num3 = num1 / num2;
  printf("Total: %d\n", num3);

  // Modulo

  int X, Y, Z;
  printf("Enter the X value for modulo: ");
  scanf("%d", &X);

  printf("Enter the Y value modulo: ");
  scanf("%d", &Y);

  Z = X % Y;
  printf("Total: %d\n", Z);
}