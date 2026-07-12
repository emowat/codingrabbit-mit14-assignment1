#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BLOCK_SIZE 1024

// Reads an arbitrary sized text file into a dynamically allocated string.
// Uses fread and realloc to dynamically resize the buffer.
size_t getstr( char **str, FILE *input ) {
    size_t chars_to_read = BLOCK_SIZE;
    size_t length = 0;
    
    // Initial allocation
    *str = (char *)malloc(BLOCK_SIZE);
    if (*str == NULL) {
        return 0;
    }

    size_t chars = 0;
    // fread reads up to chars_to_read bytes into the buffer at (*str + length)
    while( ( chars = fread( *str + length, 1, chars_to_read, input ) ) ) {
        // TODO: you fill this out
        // Hint: Update `length` with the number of characters just read, 
        // and use `realloc` to expand the buffer by BLOCK_SIZE to prepare for the next loop iteration.
    }
    
    // TODO: you may need to add final logic here
    
    return length;
}

// Encrypts the string in-place using the transposition cipher rules:
// 1. If the length is 1 or 2, do nothing.
// 2. If the string has length N and k = floor(N/2), then:
//    enc(S) = encrypt(S_k ... S_1) + encrypt(S_N ... S_{k+1})
void encrypt( char *string, size_t length ) {
    // TODO: you fill this out
}

int main(int argc, char **argv) {
    char *input_string = NULL;
    
    // Read the entire file from standard input
    size_t length = getstr(&input_string, stdin);
    
    if (length > 0) {
        // Line 1: One integer: the total number of characters in the string
        printf("%zu\n", length);
        
        // Encrypt the string in-place
        encrypt(input_string, length);
        
        // Lines 2... : The enciphered string
        fwrite(input_string, 1, length, stdout);
        printf("\n");
    }
    
    // Clean up dynamically allocated memory
    free(input_string);
    return 0;
}
