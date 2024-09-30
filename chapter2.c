//CHAPTER 2: Instructions and operators



//#include<stdio.h>
// int main(){
//     printf("%d",31%12);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     float pi=3.14;
//     int res;
//     res=(int)pi;
//     printf("%d",res);
//     return 0;

// }



// #include<stdio.h>
// int main()
// {-
//     printf("%d",5+2/2*3);
//     return 0;
// }  

 


/*#include<stdio.h>
int main(){
    printf("%d",3>4|| 5>2);
    return 0;
}                */

//WAP to check if a no. is divisible by 2

// METHOD 1
/*#include<stdio.h>
int main(){
    int number;
    printf("Enter the number from console to check if it is divisible by 2 or not:-");
    scanf("%d",& number);

    if(number%2==0){
        printf("Divisible by 2. Your number:-%d",number);
    }
    else{
        printf("Not Divisible by 2. Your number:-%d",number);
    }
    return 0;
}                            */


//METHOD 2          BY SHRADHA
/*#include<stdio.h>
int main(){
    int num;
    printf("Enter number to be checked for divisibility by 2 :-");
    scanf("%d",&num);

    printf("%d",num%2==0);
    return 0;
}                      */

//WAP to check if a no. is even/odd.

/*#include<stdio.h>
int main(){
    int num;
    printf("Enter number to be checked for even/odd.");
    scanf("%d",& num);

    if(num%2==0){
        printf("Your number is even. %d",num);
    }
    else{
        printf("Your number is odd. %d",num);
    }
}            */




//WAP to check if a number is a 2 digit number or not.

// #include<stdio.h>
// int main(){
// 	int num;
// 	printf("Enter a number to check if it is a 2 digit no. or not:-");
// 	scanf("%d",& num);
// 	if((num>9) &(num<100)){
// 		printf("2 digit number ! %d", num);
// 	}
// 	else{
// 		printf("Not %d", num);
// 	}
// 	return 0;
// }

//HOMEWORK SET QUESTIONS




//WAP to print avg. of three nos.

// #include <stdio.h>
// int main(){
//     float a,b,c,avg;
//     printf("Enter your 3 nos:-");
//     scanf("%f %f %f", &a, &b, &c);
//     avg=((a+b+c)/3);
//     printf("Your avg. is:- %.2f",avg);
//     printf("Your 3 numbers are: %f, %f, %f\n",a,b,c);
//     return 0;
// }



//WAP to check if given character is digit or not.

// #include<stdio.h>
// int main(){
//     printf("Enter your character to check if it is a digit or not:-");
//     char ch;
//     scanf(" %c",&ch);               // note the space before %c to ignore whitespace
//     if(ch>='0' && ch<='9'){
//         printf("Digit hai bhai...%c",ch);    
//     }
//     else{
//         printf("Digit nahi hai bhai...%c",ch);
//     }
//     return 0;
// }

//WAP to print the smallest no out of 3 nos.

// #include<stdio.h>
// int main(){
//     float a,b,c;
//     printf("Enter your 3 nos. Press enter after each no:");
//     scanf("%d %d %d",&a,&b,&c);
//     if(a<b&&a<c){
//         printf("a is smallest.");
//     }
//     else if(b<a&&b<c){
//         printf("b is smallest.");
//     }
//     else if(c<a&&c<b){
//         printf("c is smallest.");
//     }
//     else{
//         printf("Try again !");
//     }
//     return 0;
// }

