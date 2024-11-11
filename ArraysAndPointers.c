#include <stdio.h>
int main() {

    int rowMatrix[5] = {4, 5, 7, 8, 8};
    int newArray[5];
    //multidimensional array [row][column]
    int matrix [3][2] = { {3, 8}, {2, 0} , {5, 2}};

    //to get an element,index the row and the column
    //printf("%i\n", matrix[1][1]);
     
    //%i is the placeholder for an integer
    //printf("%i\n", rowMatrix[2]);

    for (int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            //the space beside the %i is what makes it print out in pairs side by side
            printf("%i ", matrix[i][j]);
        }
        printf("\n");
        
    }
    return 0;
}