# include <stdio.h>

int main () {
    int x[5], i , sum=0;
    float Average;
    printf("enter values : ");

    for(i=0 ; i<=4 ; i=i+1) {
        scanf("%d", & x[i]);
    }

    for(i=0 ; i<=4 ; i=i+1) {
        sum = sum + x[i];
        Average = sum / 5.0;

    }
    printf("AverageS : %.2f " , Average);

    return 0;

}