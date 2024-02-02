#include<stdio.h>
int main()
{
 int num, original_num, remainder, result=0;
 printf("Enter the three digit number");
 scanf("%d", &num);
 original_num = num;
 while (original_num != 0){
 remainder= original_num % 10;
 result += remainder * remainder * remainder;
 original_number /= 10
 }
 if(result==num)
    printf("%d is an Armstrong number", num);
 else
    printf("%d is not an Armstrong number", num);
 return 0;
}
