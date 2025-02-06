#include <stdio.h>


int main (){
    int grades[5] = {1,2,3,4,6};

    printf("Values: ");
    for (int i = 0; i < 5; i++){
    printf("%d, ", grades[i]);
    } printf("\n");

    float sum;
    printf("Average: ");
    for (int j = 0; j < 5; j++){
    sum += (float)grades[j];
    }
    printf("%.1f \n", sum/5);


    int num;
    int percent;
    float answer;

    printf("Give me a natural number: ");
    scanf("%d", &num);
    printf("Now give me a percentage from 0 to 100%: ");
    scanf("%d", &percent);
    printf("%");

    if(percent >= 0 && percent <= 100){
        answer = (float) ((num/100)*percent);
        printf("%d%% of %d equals %.1f\n", num, percent, answer);

    } else{
        printf("You dunce! Can you read?!");
    }



    return 0;
