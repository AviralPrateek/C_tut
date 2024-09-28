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
/*#include<stdio.h>
#include<math.h>
int main()
{
	double pi= 3.14;
	double LOGarg=10;
	double sq=36;
	double base=4;
	printf("sin(pi)=%lf \n",sin(pi));
	printf("cos(pi)=%lf \n",cos(pi));
	printf("Log is: %lf \n",log(LOGarg));
	printf("Power function use is: %lf \n",pow(base,2));
	printf("Square root is: %lf",sqrt(sq));
     return 0;
}                      */   // //



//4. WAP TO implement assignment operators such as.....
/*#include<stdio.h>
int main()
{
	int a=10;
	
	printf("Shorthand addition assignment operator:%d",a+=10);
     return 0;
}     */






//5. Assignment operator assigns right....

/*#include<stdio.h>
int main()
{
	int a=10,b=5;
	int temp;
	
	temp=a;
	a=b;
	b=temp;
	
	printf("Values after swaping of a: %d \n",a);
	printf("Value after swaping of b: %d ",b);
	return 0;              
	
}                  */



//3. WAP to format console output using.....

/*#include<stdio.h>
int main()
{
   	printf("Hello \nWorld");  // newline function
	printf("Hello\bWorld");   //backspace function
	printf("Hello\tWorld");   //inserts a tab character in string
	
	return 0;
}*/




//7.WAP to utilize ternary operator.



//8.WAP using sizeof()

/*#include<stdio.h>
int main()
{
	char a;
	int i;
	double d;
	
	printf("Size of a: %d \n",sizeof(a));
	printf("Size of i: %d \n",sizeof(i));
	printf("Size of d: %d",sizeof(d));
	
	return 0;
}       */






//ASSIGNMENT 3





// 1.For any character entered....
/*#include<stdio.h>

int main(){
	char ch;
	printf("Enter character from console top check if it is Capital, small, a digit, or a special symbol");
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z')
	{
	printf("Small Letter");
    }
	else if(ch>='A'&&ch<='Z')
	{
	printf("Capital Letter");
    }    
	else if(ch>=0 && ch<=9)
	{
	printf("Digit");
    }
	else
	{
	printf("Special Character");
	}

	return 0;

}            */


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

/*#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter values of A: \n");
	scanf("%d",&a);
	printf("Enter values of B: \n");
	scanf("%d",&b);
	printf("Enter values of C: \n");
    scanf("%d",&c);
    
    if(a>b)
    {
    	(a>c)?printf("A is Greastest"):printf("C is Greatest");
	}
	else if(b>c)
	{
		(b>a)?printf("B is Greatest"):printf("A is Greatest");
	}
	else if(c>a)
	{
		(c>b)?printf("C is Greatest"):printf("B is Greatest");
		
	}
	else
	{
		printf("Invalid values Try Again !");
	}
	return 0;
	
}              */





//3. To implement calculator using switch operations(+,-,/,*,%)......

/*#include<stdio.h>
int main(){
	
	int a,b;
	printf("Enter value of a: ");
	scanf("%d",&a);
	printf("Enter value of b: ");
	scanf("%d",&b);
    
    switch(choice)
    
	
	return 0;

}               */














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