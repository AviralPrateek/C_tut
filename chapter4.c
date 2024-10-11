//LOOP CONTROL STATEMENTS
// Syntax for

//  for(initialization;condition;updation){
//     //do something
//  }



// #include<stdio.h>
// int main(){
//     int i;                            //Here i is iterator or counter.
//     for(i=0;i<=100;i+=1){
//         printf("%d \n", i);
//     }
//     return 0;
// }


//Print nos. from 0 to 10. Eg: 0 1 2 3 4 5 6....10.
// #include<stdio.h>
// int main(){
//     int i;
//     for(i=0;i<=10;i++){
//         printf("%d \t",i);
//     }
//     return 0;
// }






//Syntax while

// while(condition){
//     //do something.
// }





// #include<stdio.h>
// int main(){
//     int i=0;
//     while(i<=5){
//         printf("%d \n",i);
//         i++;
//     }
//     return 0;
// }

//Q. Print nos. 0 to n, if n is entered by the user.
// #include<stdio.h>               //by for printing numbers till n.
// int main(){
//     int n;
//     int counter=0;
//     printf("Enter value of n: \n");
//     scanf("%d",& n);

//     for(counter=0;counter<=n;counter++){
//         printf("%d \n",counter);
//     }
//     return 0;
// }


// #include<stdio.h>              //by while printing numbers till n.
// int main(){
//     int n;
//     int counter=0;
//     printf("Enter value of n: \n");
//     scanf("%d",& n);

//     while(counter<=n){
//         printf("%d \n",counter);
//         counter++;
//     }
//     return 0;
// }


//Syntax do while

// do{
//     //do something
// }while(condition);





// #include<stdio.h>       //by do while printing numbers till n.
// int main(){
//     int n;
//     int counter=0;
//     printf("Enter value of n: \n");
//     scanf("%d",& n);

//     do{
//         printf("%d \n",counter);
//         counter++;   
//     }while(counter<=n);
//     return 0;
// }


//Q15. Print sum of first n natural nos. Also print them in reverse.

// #include<stdio.h>
// int main(){
//     int n,sum,counter;
//     printf("Enter value of n to print sum of n natural nos: n = ");
//     scanf("%d",& n);
//     sum=(n*(n+1))/2;
//     printf("Sum is = %d \n",sum);
//     printf("Printing them all in reverse: \n");
    
//     for(counter=n;counter>0;counter--){                       
//         printf("%d \t", counter);
//     }

//     return 0;
// }


//Q.16 Print the table of a number entered by the user.

// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter no, Number = ");
//     scanf("%d", & num);
//     printf(" \n");

//     for(int i=1;i<=10;i++){
//         printf("%d * %d = %d \n", num , i ,(num*i));
//     }

//     return 0;
// }






//Break statement functioning
// #include<stdio.h>
// int main(){
//     printf("Using break to escape for loop.\n");
//     for(int i=0;i<5;i++){
//         if(i==3){
//             printf("Ab break encounter hoga hehe !\n");
//             break;
//         }
//     }
//     printf("End of the line.\n");
//     return 0;
// }


//Keep taking numbers from user till he enters an odd number.
// #include<stdio.h>
// int main(){
//     int num;
//     do{
//         printf("Enter your number: \n");
//         scanf("%d", & num);

//         if(num%2!=0){
//             printf("Odd number found! \n %d", num);
//             break;
//         }
//     }while(1);

//     printf("\n End of your play bro you just entered odd number. \n");
//     return 0;
// }



//continue statement.
//whenever want to skip to next iteration.



//Print a series from 0 to 100, but skip 69 using continue statement.
//#include<stdio.h>
// int main(){

//     for(int i=0;i<101;i++){
//         if(i==69){
//             continue;
//         }
//         printf("%d \n", i);
//     }
//     return 0;
// }



//Q.21. Print factorial of a number n.

// #include<stdio.h>
// int main(){
//     int n;
//     double fact=1;                           //NOTE: Use double datatype for factorial storage "fact".
//     printf("Enter your number n: \n");
//     scanf("%d", & n);

//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     printf("factorial is, %lf", fact);
//     return 0;
// }
