//ASSIGNMENT 1
//1. Write a program (WAP) to display "Hello World" on console display.
// #include<stdio.h>
// int main(){
// 	printf("Hello World");
// 	return 0;
// }


//2. WAP to input an integer and display it.
// #include<stdio.h>
// int main(){
// 	int i;
// 	printf("Enter your integer to display it.");
// 	scanf("%d",& i);
// 	printf("Your integer:- %d \n",i);
// 	return 0;
// }

//3. WAP to input a decimal number and display it.
// #include<stdio.h>
// int main(){
// 	float i;
// 	printf("Enter your decimal to display it");
// 	scanf("%f",& i);
// 	printf("Your decimal:- %.2f \n ",i);      //.2 demonstrates 2 decimal places.
// 	return 0;
// }

//4.	WAP to input a character and display it.
// #include<stdio.h>
// int main(){
// 	char ch;
// 	printf("Enter your character to be displayed.");
// 	scanf("%c",& ch);
// 	printf("Your character is:- %c",ch);
// 	return 0;
// }

//5.WAP to input a fraction (rational number) and display.
//(Ask the user to input numerator and denominator, then display it in the form of p/q without simplification).

// #include<stdio.h>
// int main(){
// 	int n,d;
// 	printf("Enter numerator:-");
// 	scanf("%d",&n);
// 	printf("Enter denominator:-");
// 	scanf("%d",&d);

// 	printf("Your number in p/q form is:- %d/%d",n,d);                  // NOTE
// 	return 0;
// }

//6.WAP to add, subtract, multiply, divide numbers.

// #include<stdio.h>
// int main(){
// 	float a,b;
// 	printf("Enter first number:- ");
// 	scanf("%f",&a);
// 	printf("Enter second number:-");
// 	scanf("%f",&b);
    
// 	printf("Addition:%f + %f= %f\n",a,b,a+b);             //NOTE
// 	printf("Subtraction:%f - %f= %f\n",a,b,a-b);
// 	printf("Multiplication:%f * %f= %f\n",a,b,a*b);
// 	if(b==0){
// 		printf("Division not possible with 0 denominator !");
// 	}
// 	else{
// 		printf("Division:%f / %f= %f\n",a,b,a/b);
// 	}
	
// 	return 0;
// }



//7.WAP to find Nth root of a number.
// #include<stdio.h>
// #include<math.h>
// int main(){
// 	double num;
// 	double n;
// 	double cal;
// 	printf("Enter number to calculate its nth root:- ");
// 	scanf("%lf",&num);
// 	printf("Enter value of 'n' for nth root calculations:- ");
// 	scanf("%lf",&n);
    
// 	cal= pow(num,1/n);                                               //NOTE: 1/n
// 	printf("nth root for your number is = %lf",cal);
// 	return 0;
// }




//8.WAP for calculation of area of circle.

// #include<stdio.h>
// #include<math.h>
// int main(){
// 	double r, pi=3.14, area;

// 	printf("Enter radius for area calculations:- ");
// 	scanf("%lf",& r);
//     area=pi*pow(r,2);
// 	printf("Area of your circle= %lf square unit.", area);
// 	return 0;
// }


//9.WAP for SI.
// #include<stdio.h>
// int main(){
// 	double SI,r,p,t;
// 	printf("Enter Principal amount:- ");
// 	scanf("%lf",& p);
// 	printf("Enter Rate:- ");
// 	scanf("%lf",& r);
// 	printf("Enter Time:- ");
// 	scanf("%lf",& t);

// 	SI=(p*r*t)/100;
// 	printf("Simple interest= %lf", SI);
	
// 	return 0;

// }



//10. WAP to calculate CI.
//The compound interest formula is:

// A = P (1 + r/n)^(nt)

// Where:

// A = the future value of the investment/loan, including interest
// P = the principal investment amount (the initial deposit or loan amount)
// r = the annual interest rate (in decimal form - e.g., 4% = 0.04)
// n = the number of times that interest is compounded per year
// t = the time the money is invested or borrowed for, in years

// #include<stdio.h>
// #include<math.h>
// int main(){
// 	double Amount,P,R,T,n,CI;
// 	printf("Enter Principal amount:- ");
// 	scanf("%lf",&P);
// 	printf("Enter Rate of interest:- ");
// 	scanf("%lf",&R);                        //NOTE: Should enter rate in percent form which'll be converted.
// 	printf("Enter Time in years:- ");
// 	scanf("%lf",&T);
// 	printf("Enter no. of times that interest is compounded per year:- "); 
// 	scanf("%lf",&n);
    
// 	R=R/100;                               //NOTE: Conversion of %rate to formula specific rate.
// 	Amount = P * pow((1 + R/n),(n*T));
// 	printf("Amount is:- %lf \n", Amount);
// 	CI=Amount-P;
// 	printf("CI is:- %lf \n", CI);
// 	return 0;
// }


//11.WAP to calculate the gross salary of a person where,
//   gross salary=basic+da+ta.   da is 10% of basic and ta is 12% of basic.

// #include<stdio.h>
// int main(){
// 	double grosssalary,basic,da,ta;
// 	printf("Enter your basic salary:- ");
// 	scanf("%lf",& basic);
// 	da=0.10*basic;
// 	ta=0.12*basic;

// 	grosssalary= basic+da+ta;
// 	printf("Your gross salary is:- %lf", grosssalary);

// 	return 0;
// }




//ASSIGNMENT 2




//1.WAP to practice math functions such as ....
// #include<stdio.h>
// #include<math.h>
// int main(){

// 	double pi= 3.14;
// 	double LOGarg=10;
// 	double sq=36;
// 	double base=4;
// 	printf("sin(pi)=%lf \n",sin(pi));
// 	printf("cos(pi)=%lf \n",cos(pi));
// 	printf("Log is: %lf \n",log(LOGarg));
// 	printf("Power function use is: %lf \n",pow(base,2));
// 	printf("Square root is: %lf",sqrt(sq));
//      return 0;
// }                       




//2.WAP to find roots of a Quadratic Eq. (D>=0).
// #include<stdio.h>
// #include<math.h>
// int main(){                  //ax^2+bx+c=0
//     double a,b,c;                              //NOTE:Use double datatype instead of int for precision.
// 	double D;
//     printf("Format of Eqn. : ax^2+bx+c=0 \n1");
// 	printf("Enter values of coefficients a,b,c with sign...\n");

// 	printf("Enter 'a':-\n ");
// 	scanf("%lf",&a);
// 	printf("Enter 'b':-\n ");
// 	scanf("%lf",&b);
// 	printf("Enter 'c':-\n ");
// 	scanf("%lf",&c);
    
// 	double alpha,beta;

// 	D=(pow(b,2)-4*a*c);

// 	if(D>=0){
// 		printf("Roots exist ! \n");
// 	    alpha= (-b+sqrt(D))/(2*a);                             // Root(α,β)= (-b±√b^2-4ac)/4ac
// 		beta= (-b-sqrt(D))/(2*a);                              //NOTE: Use () around 2*a for accurate division.
// 		printf("Roots are:(alpha,beta)=(%lf,%lf) \n",alpha,beta);
// 	}
//     else{
// 		printf("Roots doesn't exist !...Try again. \n");
// 	}

// 	return 0;
// }



//3. WAP to format console output using '\n', '\t', '\b' within printf statement.

// #include<stdio.h>
// int main()
// {
//    	printf("Hello \nWorld");  // newline function
// 	printf("HelloWorld\b\b\b\b\b");   //backspace function
// 	printf("Hello\tWorld");   //inserts a tab character in string
	
// 	return 0;
// }




//4. WAP TO implement assignment operators such as += , -= , *=, /= %= etc.
//#include<stdio.h>
// int main()
// {
// 	int a=10;
	
// 	printf("Shorthand addition assignment operator:%d \n",a+=20);
// 	printf("Shorthand addition assignment operator:%d \n",a-=15);
// 	printf("Shorthand multiplication assignment operator:%d \n",a*=2);
// 	printf("Shorthand division assignment operator:%d \n",a/=5);
// 	printf("Shorthand division assignment operator:%d \n",a%=5);

//      return 0;
// }     

//5. Assignment operator assigns right....

// #include<stdio.h>
// int main()
// {
// 	int a=10,b=5;
// 	int temp;
	
// 	temp=a;
// 	a=b;
// 	b=temp;
	
// 	printf("Values after swaping of a: %d \n",a);
// 	printf("Value after swaping of b: %d ",b);
// 	return 0;              
	
// }                  



//6.WAP to shift left and shift right operators (>> and <<). Ask the application of this operator to your lab instructor.





//7.WAP to utilize ternary operator.
// #include<stdio.h>
// int main(){
// 	double amt,res;
// 	printf("Wanna but cake or pastry. Enter budget to know using ternary operator:");
// 	scanf("%lf",& amt);
// 	res=(amt>=1000) ? 1 : 0;
//     printf("1 for cake, 0 for pastry. %lf",res);

// 	return 0;
// }


//8.WAP using sizeof()

//#include<stdio.h>
// int main()
// {
// 	char a;
// 	int i;
// 	float f;
// 	double d;
	
// 	printf("Size of a: %d \n",sizeof(a));
// 	printf("Size of i: %d \n",sizeof(i));
// 	printf("Size of d: %d \n",sizeof(f));
// 	printf("Size of f: %d \n",sizeof(d));
	
// 	return 0;
// }       


//9. WAP to divide two numbers and use type casting operation (e.g. mean = (double)sum/n;).

// #include<stdio.h>
// int main(){
// 	printf("Dividing 2 two nos. & using type casting operation...\n");
// 	int N=10,D=3;
// 	int mean1;
// 	double mean2;

// 	mean1 = N/D;
// 	mean2 = (double)N/D;                                    //Doing proper type casting to save data after decimal.
// 	printf("Without type casting: %d \n",mean1);
// 	printf("With type casting : %lf \n",mean2);
// 	return 0;
// }


//10.String is set of characters (one next to each other stored in the memory and not related to each other).
//e.g. ="abc123". WAP to practice type casting using the following functions. 
//You can initialize a string using statement char *s="3.145" Then s is a string.



//ASSIGNMENT 3





// 1.For any character entered through keyboard check whether the entered character is capital letter, small letter,
// a digit or special symbol
// #include<stdio.h>

// int main(){
// 	char ch;
// 	printf("Enter character from console top check if it is Capital, small, a digit, or a special symbol");
// 	scanf("%c",&ch);
// 	if(ch>='a'&&ch<='z')
// 	{
// 	printf("Small Letter");
//     }
// 	else if(ch>='A'&&ch<='Z')
// 	{
// 	printf("Capital Letter");
//     }    
// 	else if(ch>=0 && ch<=9)
// 	{
// 	printf("Digit");
//     }
// 	else
// 	{
// 	printf("Special Character");
// 	}

// 	return 0;

// }            


//2.Find the greatest of 3 using 2 methods.  (A).if else (B).Ternary operator.

//Using METHOD 1:
/*#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter values of A: \n");
	scanf("%d",&a);
	printf("Enter values of B: \n");
	scanf("%d",&b);
	printf("Enter values of C: \n");
    scanf("%d",&c);
	
	if (a>b && a>c)
	{
		printf("A is Greatest.");
    }
    else if (b>a && b>c)
    {
    	printf("B is Greatest.");
	}
	else if (c>a && c>b)
	{
		printf("C is Greatest.");
	}
	else
	{
		printf("INVALID CASE ! TRY AGAIN.....");
	}
	
	return 0;
}                      */

//Using METHOD 2:

// #include<stdio.h>
// int main(){
// 	int a,b,c;
// 	printf("Enter values of A: \n");
// 	scanf("%d",&a);
// 	printf("Enter values of B: \n");
// 	scanf("%d",&b);
// 	printf("Enter values of C: \n");
//     scanf("%d",&c);
//     int res1,res2,res3;;

//     res1=(a>b)&&(a>c)?1:0;
	
// 	res2=(b>a)&&(b>c)?1:0;
	
// 	res3=(c>b)&&(c>a)?1:0;
	
// 	if(res1==1){
// 		printf("A is greatest. \n");
// 	}
// 	else if(res2==1){
// 		printf("B is greatest. \n");
// 	}
// 	else if (res3==1){
// 		printf("C is greatest. \n");
// 	}
	
// 	return 0;
	
// }              



//3. To implement calculator using switch operations(+,-,/,*,%)......

// #include<stdio.h>
// int main(){
	
// 	int a,b;
// 	printf("Enter value of a: ");
// 	scanf("%d",&a);
// 	printf("Enter value of b: ");
// 	scanf("%d",&b);
    
//     switch(choice)
    
	
// 	return 0;

// }               



//Q4.Display month name according to the month number using Switch Statement
// #include<stdio.h>
// int main(){
// 	int ch;
// 	printf("Enter your month choice from (1-12) from console : \n");
// 	scanf("%d",& ch);

// 	switch(ch){
// 		case 1:
// 		printf("January \n");
// 		break;
// 		case 2:
// 		printf("Feburary \n");
// 		break;
// 		case 3:
// 		printf("March \n");
// 		break;
// 		case 4:
// 		printf("April \n");
// 		break;
// 		case 5:
// 		printf("May \n");
// 		break;
// 		case 6:
// 		printf("June \n");
// 		break;
// 		case 7:
// 		printf("July \n");
// 		break;
// 		case 8:
// 		printf("August \n");
// 		break;
// 		case 9:
// 		printf("September \n");
// 		break;
// 		case 10:
// 		printf("October \n");
// 		break;
// 		case 11:
// 		printf("November \n");
// 		break;
// 		case 12:
// 		printf("December \n");
// 		break;
// 		default:
// 		printf("Invalid entry");

// 	}
// 	return 0;
// }





//Q5.To check whether number is: (a) even or odd (b) negative or positive by using (i) if-else (ii) ternary operator.

// #include<stdio.h>
// int main(){
// 	int num;
// 	printf("Enter your number to check if it is even/odd & negative/positive from console: \n");
// 	scanf("%d",& num);
// 	int ch;
// 	printf("Enter 1 to check it with if-else & 2 to check it with ternary operator from console : \n ");
// 	scanf("%d",& ch);
// 	switch(ch){         //OPENING OF 1ST SWITCH;
// 		case 1:        //Checking via if-else
// 		printf("Enter a to check if the no is even/odd from console & b to check for positive/negative\n");
// 		char choice1;
// 		scanf("%c",& choice1);

// 		switch(choice1){      //OPENING OF 2nd SWITCH;
// 			case 'a':			//Choice a for even/odd;
// 			if(num%2==0){
// 				printf("EVEN \n");
// 			}
// 			else if(num%2!=0){
// 				printf("ODD \n");
// 			}
// 			else{
// 				printf("INVALID ENTRY , ENTER INTEGERS ONLY , TRY AGAIN ! \n" );
// 			}
// 			break;

// 			case 'b':			//Choice b for negative/positive;      
// 			if(num>=0){
// 				printf("POSITIVE NUMBER \n");
// 			}
// 			else if(num<0){
// 				printf("NEGATIVE NUMBER \n");
// 			}
// 			else{
// 				printf("INVALID ENTRY , ENTER INTEGERS ONLY ,TRY AGAIN ! \n");
// 			}
// 			break;
// 			default:
// 				printf("INVALID ENTRY , ENTER a or b only ,TRY AGAIN ! \n");
// 		    } //CLOSING OF 2nd SWITCH
			
// 		case 2: 		//CHECKING VIA TERNARY OPERATOR
// 	    char choice2;
// 		printf("Enter a to check if the no is even/odd from console & b to check for positive/negative\n");
// 		scanf("%c",& choice2);

// 		switch(choice2){     //OPENING OF 3rd SWITCH
// 		    case 'a':
// 			num%2==0 ? printf("EVEN"):printf("ODD \n");
// 			break;
 
// 			case 'b':
// 			num>=0 ? printf("Positive \n"):printf("Negative \n");
// 			break;

// 			default:
// 			printf("INVALID ENTRY , ENTER a or b only ,TRY AGAIN ! \n");
// 			}           //CLOSING OF 3rd SWITCH
// 			}  //CLOSING OF 1st SWITCH;
// 	return 0;
// }
	  
	






//ASSIGNMENT 5


//PROGRAM1
/*#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
	printf("Element at arr[8]: %d",arr[8]);
	return 0;
}           */

//PROGRAM2

/*include<stdio.h>
int main(){
	int arr[5]={1,50,60,40,70};
	arr[2]=100;          // array modification
	int i;
	printf("Elements in the array: ");
	for(i=0;i<5;i++)
	{
		printf("%d" "," ,arr[i]);
    }
	return 0;
}        */

//PROGRAM3  Reverse an array 1,2,3,4,5 to 5,4,3,2,1.
/*include<stdio.h>
int main(){
	int array[5]={1,2,3,4,5};
	int i;
	
	for(i=4;i>=0;i--)
	{
		printf("%d" "," ,array[i]);
	}
	return 0;
}                */


//PROGRAM4 Delete an element from array.

/*#include<stdio.in> 
int main(){
	int arr[5]={1,2,3,4,5};
	int size=5;
	int i,j,element;
	
	int array[5]={1,2,3,4,5};
	
	printf("Enter element to be deleted.");
	scanf("%d",& element);
	
	for(i=0;i<size;i++)
	{
		if(arr[i] == element){
			for(j=i;j<size-1;j++)
			{
				arr[j] = arr[j++];}
				size--;                  // The program is incomplete with incomplete logic 
			}
		}
    }
	return 0;
}                      */


//WAP to check if a number is a 2 digit number or not.

// #include<stdio.h>
// int main(){
// 	int num;
// 	printf("Enter a number to check if it is a 2 digit no. or not.");
// 	scanf("%d",&num);
// 	if(num>9&&num<100){
// 		printf("2 digit number ! %d", num);
// 	}
// 	else{
// 		printf("Not %d", num);
// 	}
// 	return 0;
// }