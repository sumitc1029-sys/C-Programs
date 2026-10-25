# include <stdio.h>

int main () {
    int grade;
    printf("Enter Grade\n");
    scanf("%d", &grade);

    if(grade>=90) {
        printf("Your Grade is A\n");

    }

    else if (grade>=80 && grade<90) {
        printf("Your Grade is B\n");

    }

    else if (grade>=70 && grade<80) {
        printf("Your Grade is C\n");

    }

    else if (grade>=60 && grade<70) {
        printf("Your Grade is D\n");

    }

    else if( grade>=45 && grade<60) {
        printf("Your Grade is E\n");
    }

    else {
        printf("FAIL\n");
    }
    
    
    return 0;
}