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
// #include<stdio.h>               //by for
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


// #include<stdio.h>              //by while
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


#include<stdio.h>
int main(){
    int n;
    int counter=0;
    printf("Enter value of n: \n");
    scanf("%d",& n);

    do{
        printf("%d",counter);
        
    }
    return 0;
}