// #include <stdio.h>
// #include <math.h>

// int main() {
//     int binary, decimal = 0, base = 1, remainder;

//     // Input binary number
//     printf("Enter a binary number: ");
//     scanf("%d", &binary);

//     int temp = binary;  // Store the binary number for future reference.

//     while (binary > 0) {
//         remainder = binary % 10;                // Get the last digit of the binary number.
//         decimal = decimal + remainder * base;  // Add the corresponding decimal value.
//         binary = binary / 10;                 // Remove the last digit from binary.
//         base = base * 2;                     // Update base value for next binary digit.
//     }

//     printf("Binary number: %d\n", temp);
//     printf("Decimal equivalent: %d\n", decimal);

//     return 0;
// }





//Find max among 3 integers using ternary.

// #include<stdio.h>
// int main(){
//     int a,b,c,max;
//     printf("Enter value of a,b,c in order=");
//     scanf("%d %d %d", &a, &b, &c);
//     max=a>b?a:b;
//     max=c>max?c:max;
//     printf("\n Max value of all 3 is = %d", max);


//     return 0;
// }