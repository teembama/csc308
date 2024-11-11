#include <stdio.h>
int main(){
    int age; 
    int experience;
    int salary;
    printf("Enter your age:");
    scanf("%d", &age);

    printf("Are you experienced?, Enter 1 if you are experienced and 0 if you are not experienced:\n");
    scanf("%d", &experience);

    if (experience == 1 & age >= 40){
        salary = 560000;
        printf("Your salary is: N%d\n", salary);
    }
    else if (experience == 1 & age < 40 & age >= 30){
        salary = 480000;
        printf("Your salary is: N%d\n", salary);
    }
    else if (experience == 1 & age < 28){
        salary = 300000;
        printf("Your salary is: N%d\n", salary);
    }
    else if (experience == 0){
        salary = 100000;
        printf("Your salary is: N%d\n", salary);
    }
    else{
        printf("This is an invalid situation");
    }
}