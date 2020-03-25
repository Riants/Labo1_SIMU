#include <iostream>
#include "math_tools.h"
#include "display_tools.h"

using namespace std;

int main()
{
    Matrix matrix_entrada, matrix_cof, matrix_tras, matrix_inv;

    zeroes(matrix_entrada, 3);

    matrix_entrada.at(0).at(0) = 1; matrix_entrada.at(0).at(1) = 2; matrix_entrada.at(0).at(2) = 3;
    matrix_entrada.at(1).at(0) = 1; matrix_entrada.at(1).at(1) = 2; matrix_entrada.at(1).at(2) = 3;
    matrix_entrada.at(2).at(0) = 1; matrix_entrada.at(2).at(1) = 2; matrix_entrada.at(2).at(2) = 3;

    cofactors(matrix_entrada, matrix_cof);
    transpose(matrix_cof, matrix_tras);



}
