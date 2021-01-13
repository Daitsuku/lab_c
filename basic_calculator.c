#include<stdio.h>
#include <stdlib.h>

void main(){

    //system("cls");

    int c,x,y,z;

    printf("Choose your option :\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Exit\n\n:");
    scanf("%d",c);

    printf(c);
    sleep(3);
    if (c == 1){
        printf("Enter the first integer : ");
        scanf("%d",x);

        printf("Enter the second integer : ");
        scanf("%d",y);

        z = x+y;
        printf("The addtion of %d and %d is : %d",x,y,z);
    }
    else if(c == 2){
        printf("Enter the first integer : ");
        scanf("%d",x);

        printf("Enter the second integer : ");
        scanf("%d",y);

        z = x-y;
        printf("The addtion of %d and %d is : %d",x,y,z);
    }
        
    else if(c == 3){
        printf("Enter the first integer : ");
        scanf("%d",x);

        printf("Enter the second integer : ");
        scanf("%d",y);

        z = x*y;
        printf("The addtion of %d and %d is : %d",x,y,z);
    }
        
    else if(c == 4){
        printf("Enter the first integer : ");
        scanf("%d",x);

        printf("Enter the second integer : ");
        scanf("%d",y);

        z = x/y;
        printf("The addtion of %d and %d is : %d",x,y,z);
    }
        
    else
        exit(0);
    
}

