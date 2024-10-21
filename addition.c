// #include <stdio.h>
// int main() {    

//     int number1, number2, sum;
    
//     printf("Enter two integers: ");
//     scanf("%d %d", &number1, &number2);

//     // calculate the sum
//     sum = number1 + number2;      
    
//     printf("%d + %d = %d", number1, number2, sum);
//     return 0;
// }


#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}
