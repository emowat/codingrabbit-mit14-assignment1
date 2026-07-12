#include <iostream>

union float_bits {
    float f;
    unsigned int bits;
};

// This function takes a floating point number and prints its binary
// representation in the scientific format: [-]1.[mantissa] * 2^[exponent]
// (or 0.[mantissa] * 2^-126 for denormalized numbers).
void print_float_binary(float f) {
    union float_bits t;
    t.f = f;
    
    unsigned int bits = t.bits;
    
    // TODO: Extract the 1 sign bit
    // Hint: Shift and mask
    
    // TODO: Extract the 8 exponent bits
    
    // TODO: Extract the 23 mantissa bits
    
    // TODO: Calculate the unbiased exponent (bias is 127)
    // Handle the special case for denormalized numbers!
    
    // TODO: Print the formatted string matching the assignment output.
    // Example: "1.10000000000000000000000 * 2^0"
    
}

int main() {
    int N;
    
    // Read the number of floating point values
    if (!(std::cin >> N)) {
        return 0;
    }
    
    // Read each float and print its binary representation
    for (int i = 0; i < N; ++i) {
        float x;
        std::cin >> x;
        print_float_binary(x);
    }
    
    return 0;
}
