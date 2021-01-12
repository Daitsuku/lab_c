#include<stdio.h>

void main(){

    system("cls");

    int f,x,f_tmp;

    printf("Enter factorial number here (! exclude): ");
    scanf("%d",&f);
    
    f_tmp = f;
    x =1;
    while(f_tmp>0){

        x = x * f_tmp;
        f_tmp--;
        
    }

    printf("Factorial of the num(%d) = %d", f,x);

    // fac(f,f_tmp);

}

// void fac(int f,int f_tmp){

//     int x;
//     x=1;
//     while(f_tmp>0){
//         x = x * f_tmp;
//         f_tmp--;
//         printf(x,f_tmp);
//         sleep(3);
//     }
    
// }