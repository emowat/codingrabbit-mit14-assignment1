#include <iostream>

typedef struct Matrix_s {
    size_t R, C;
    int *index;
} Matrix;

// TODO: Implement a function to dynamically allocate memory for a matrix
void allocate_matrix(Matrix& m, size_t R, size_t C) {
    m.R = R;
    m.C = C;
    // Hint: Allocate an array of R * C integers on the heap and assign it to m.index
    
}

// TODO: Implement a function to free the dynamically allocated memory
void destroy_matrix(Matrix& m) {
    // Hint: Free the memory allocated for m.index
    
}

// Helper function to read a matrix's dimensions and values from standard input
void read_matrix(Matrix& m) {
    size_t r, c;
    if (!(std::cin >> r >> c)) {
        return;
    }
    
    allocate_matrix(m, r, c);
    
    for (size_t i = 0; i < m.R; ++i) {
        for (size_t j = 0; j < m.C; ++j) {
            // Note: Since index is a 1D array, we use (i * C + j) to calculate the 2D offset!
            std::cin >> m.index[i * m.C + j];
        }
    }
}

// Helper function to print a matrix's dimensions and values to standard output
void print_matrix(const Matrix& m) {
    std::cout << m.R << " " << m.C << "\n";
    for (size_t i = 0; i < m.R; ++i) {
        for (size_t j = 0; j < m.C; ++j) {
            std::cout << m.index[i * m.C + j];
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
    
    // TODO: Allocate memory for the product matrix C using your allocate_matrix function.
    
    // TODO: Perform the matrix multiplication (C = A * B).
    // Hint: Make sure to initialize C's entries to 0 before accumulating the sum.
    
}

int main() {
    Matrix A, B, C;
    
    // Read matrices A and B (this automatically calls your allocate_matrix function)
    read_matrix(A);
    read_matrix(B);
    
    multiply_matrices(A, B, C);
    
    print_matrix(C);
    
    // Clean up dynamically allocated memory
    destroy_matrix(A);
    destroy_matrix(B);
    destroy_matrix(C);
    
    return 0;
}
