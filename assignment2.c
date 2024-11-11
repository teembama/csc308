#include<stdio.h>
int main(){
   int decision;
   printf(" Enter 1 for integer\n Enter 2 for Float\n Enter 3 for character\n");
   printf("What type of value would you like to enter?:"); 
   scanf("%d", &decision);

   switch(decision){
    case 1:{
        int integer;
        printf("Enter the value: ");
        scanf("%d", &integer);
        int a, b, c, d;
        a = 3 * integer;
        b = 3 * a;
        c = 3 * b;
        d = 3 * c;
        printf("%d, %d, %d, %d\n" , a,b,c,d);
        int size = sizeof(integer);
        printf("The size of the operator is %d\n",size);
        printf("The ASCII for the value %d is %c\n ", integer, (char)integer);
        break;
    }
    case 2:{
        float value;
        printf("Enter the value: ");
        scanf("%f", &value);
        float a, b, c, d;
        a = 3 * value;
        b = 3 * a;
        c = 3 * b;
        d = 3 * c;
        printf("%f, %f, %f, %f\n" , a,b,c,d);
        int size = sizeof(value);
        printf("The size of the operator is %d\n",size);
        int intpart = (int)value;
        printf("The ASCII for the value %f is %c\n ", value , (char)intpart);
        break;
    }
    case 3:{
        char character;
        printf("Enter the value: ");
        scanf(" %c", &character);
        printf("Next four characters in multiples of 3:\n");

            for (int i = 1; i <= 4; i++) {
                char nextChar = character + i * 3;
                printf("Character: %c, ASCII: %d, Size: %lu bytes\n", nextChar, nextChar, sizeof(nextChar));
            }
        break;
    }
    default:
            printf("Invalid input.");
    }
    return 0;
}