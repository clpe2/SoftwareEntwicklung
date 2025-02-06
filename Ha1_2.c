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


    return 0;
}
