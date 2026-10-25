# include <stdio.h>

int main () {
    int a , b;
    printf("Enter two Numbers : ");
    scanf("%d%d" , &a , &b);

    if (a>=b) 
    printf("%d is Greater than %d \n" ,a, b);

    else
    printf("%d is greater than %d " , b , a);
    
    return 0;

}