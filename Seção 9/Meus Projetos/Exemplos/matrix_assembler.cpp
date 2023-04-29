/* Matrix Assembler Program: programa que, com base em dados inseridos pelo usuário, monta uma matriz quadrada (vetor 2D)*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    cout << "=============================" << endl;
    cout << "      MATRIX ASSEMBLER       " << endl;
    cout << "=============================" << endl;

    int matrix_order{0};

    cout << "Enter the matrix order to be assembled: ";
    cin >> matrix_order;

    vector<vector<int>> matrix{};
    vector<int> matrix_2d_row{};

    int user_input{};

    for(int row_index{0}; row_index < matrix_order ; row_index++){
        for(int column_index{0}; column_index < matrix_order; column_index++){
            cout << "Enter the numbers of the " << row_index + 1 << "st" << " matrix " << " (each one separated by space): ";
            cin >> user_input;
            matrix_2d_row.push_back(user_input);
        }

        user_input = 0;
        matrix_2d_row ={};
    }   

    for(auto matrix_row: matrix)
        for(auto matrix_column:matrix_row)
            cout << matrix_column << endl;  

    return 0;
}