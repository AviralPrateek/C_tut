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

#include<stdio.h>
int main(){
	int num;
	printf("Enter a number to check if it is a 2 digit no. or not.");
	scanf("%d",num);
	if(num>9&&num<100){
		printf("2 digit number ! %d", num);
	}
	else{
		printf("Not %d", num);
	}
	return 0;
}