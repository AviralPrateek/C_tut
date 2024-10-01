//CHAPTER 3: CONDITIONAL OPERATORS
//WAP using ternary operator to check if someone is eligible to vote.
// #include<stdio.h>
// int main(){
//     double age;
//     printf("Enter your age...");
//     scanf("%lf",& age);
//     age>=18 ? printf("Can vote \n"):printf("Cannot vote \n");
//     return 0;   // NOTE: ternary op. is replacing several lines of if else if code.
// }




/*
SWITCH SYNTAX

switch(number){

case C1://do something
       break;
case C2://do something
       break;       
default://do something

}
*/


//WAP Using switch case to print day with day no.

// #include<stdio.h>
// int main(){
//     int day;
//     printf("Enter day number to get day like 1 for monday..");
//     scanf("%d",&day);

//     switch(day){
//         case 1: printf("MONDAY \n");
//                 break;
//         case 2: printf("TUESDAY \n");
//                 break;
//         case 3: printf("WEDNESDAY \n");
//                 break;
//         case 4: printf("THURSDAY \n");
//                 break;
//         case 5: printf("FRIDAY \n");
//                 break;
//         case 6: printf("SATURDAY \n");
//                 break;
//         case 7: printf("SUNDAY \n");
//                 break;          
//         default:
//                 printf("Invalid entry");                                      

//     }
//     return 0;
// }

//Q. WAP to check if a student passed or failed.
//marks>30 passed
//marks<=30 failed

// #include<stdio.h>
// int main(){
//     double marks;
//     printf("Enter marks out of 100: \n");
//     scanf("%lf",& marks);
//     printf("PRESS 1 to solve with if else & 2 to solve with ternary operator...");
//     int choice;
//     scanf("%d",&choice);
//     switch(choice){
//     case 1:
//     if(marks>30 && marks<=100){
//         printf("PASSED by if else\n");
//     }
//     else if(marks<=30 && marks >=0){
//         printf("FAILED by if else \n");
//     }
//     else{
//         printf("Invalid entry !");
//     }
//     break;

//     case 2:
//     marks<=30 && marks>=0 ? printf("FAILED by ternary \n") : printf("PASSED by ternary \n");
//     break;

//     default:
//         printf("Invalid choice. Try 1 or 2.");
//     }
//     return 0;
// }

//PRACTICE Q.11.
// #include<stdio.h>
// int main(){
// int x=6;

// if(x=0){
//     printf("x is equal to 1.");
// }
// else{
//     printf("x is not equal to 1.");
// }
//     return 0;
// }    


//WAP to check if a given character entered by user is upper case or not.

// #include<stdio.h>
// int main(){
//     char ch;
//     printf("Enter your character: \n ");
//     scanf("%c",& ch);

//     if(ch>='A' && ch<='Z')           //NOTE: Remember ASCII values also.
//     {
//         printf("Uppercase \n");
//     }
//     else if(ch>='a' && ch<='z') {
//         printf("Lowercase \n");
//     }
//     else{
//          printf("Enter character from a to z or A to Z. \n");
//     }
//     return 0;
// }