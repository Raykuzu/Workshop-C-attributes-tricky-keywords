//
// Created by raykuzu on 20/03/2020.
// Targets: floating variables
// Effects: utility
// _Imaginary keyword (or imaginary if you include complex.h) allows you to
// declare imaginary numbers.
// Since C99
//

#include <complex.h>

// Header define I too. (for _Complex_I or _Imaginary_I if supported)
// Warning: Imaginary is a feature, not necessarily available

int main() {

    #ifdef _Imaginary_I
    float _Imaginary a = 3 * _Imaginary_I;

    // is equal to

    float imaginary a2 = 1 + 3 * I;

    (void)a;
    (void)a2;
    #endif
    return (0);
}