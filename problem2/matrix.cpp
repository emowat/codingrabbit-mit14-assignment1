#include <iostream>

#define MAXN 300

typedef struct Matrix_s {
    size_t R, C;
    int index[MAXN][MAXN];
} Matrix;

// Helper function to read a matrix's dimensions and values from standard input
void read_matrix(Matrix& m) {
    if (!(std::cin >> m.R >> m.C)) {
        return;
    }
    
    for (size_t i = 0; i < m.R; ++i) {
        for (size_t j = 0; j < m.C; ++j) {
            std::cin >> m.index[i][j];
        }
    }
}

// Helper function to print a matrix's dimensions and values to standard output
void print_matrix(const Matrix& m) {
    std::cout << m.R << " " << m.C << "\n";
    for (size_t i = 0; i < m.R; ++i) {
        for (size_t j = 0; j < m.C; ++j) {
            std::cout << m.index[i][j];
            if (j < m.C - 1) {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
}

// Multiplies matrix A and matrix B, storing the result in matrix C
void multiply_matrices(const Matrix& A, const Matrix& B, Matrix& C) {
    // TODO: Check if the matrices have valid dimensions for multiplication (A.C == B.R).
    // If they cannot be multiplied, set C.R = 0 and C.C = 0 and return early.
    
    // TODO: Set the correct dimensions for the product matrix C.
    
    // TODO: Perform the matrix multiplication (C = A * B).
    // Hint: You will need three nested loops!
    // Make sure to initialize C's entries to 0 before accumulating the sum.
    
}

int main() {
    Matrix A, B, C;
    
    // The input/output boilerplate is provided for you
    read_matrix(A);
    read_matrix(B);
    
    multiply_matrices(A, B, C);
    
    print_matrix(C);
    
    return 0;
}
