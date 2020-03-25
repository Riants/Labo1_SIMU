#include <iostream>
#include <stdlib.h>
#include "math_tools.h"
#include "display_tools.h"

using namespace std;

int main()
{
    Matrix matrix_entrada, matrix_cof, matrix_tras, matrix_inv;

    zeroes(matrix_entrada, 3);

    matrix_entrada.at(0).at(0) = 9; matrix_entrada.at(0).at(1) = 2; matrix_entrada.at(0).at(2) = 3;
    matrix_entrada.at(1).at(0) = 4; matrix_entrada.at(1).at(1) = 5; matrix_entrada.at(1).at(2) = 6;
    matrix_entrada.at(2).at(0) = 7; matrix_entrada.at(2).at(1) = 8; matrix_entrada.at(2).at(2) = 9;

    float det = determinant(matrix_entrada);

    if(det==0.0){
        printf("determinante es cero.");
        exit(EXIT_FAILURE);
    } else {
        cofactors(matrix_entrada, matrix_cof);
        transpose(matrix_cof, matrix_tras);
        productRealMatrix(1/det,matrix_tras,matrix_inv);
        showMatrix(matrix_inv);

    }
}
