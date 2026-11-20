#include <stdio.h>

int main() {
    float s1, s2, s3, s4, s5, percentage;
    printf("Enter marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);
    percentage = (s1 + s2 + s3 + s4 + s5) / 5;
    printf("Percentage = %f\n", percentage);
    if (percentage >= 60){
        printf("Division: First Division\n");
    }   
    else if (percentage >= 50){
      printf("Division: Second Division\n");
    }
    else if (percentage >= 40){
        printf("Division: Third Division\n");
    } 
    else{
      printf("Result: Fail\n");
    }
      
    return 0;
}