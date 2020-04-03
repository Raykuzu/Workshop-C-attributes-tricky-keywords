//
// Created by raykuzu on 20/03/2020.
// Targets: floating variables
// Effects: utility
// _Complex keyword (or complex if you include complex.h) allows you to declare
// complex numbers.
// Since C99
//

#include <complex.h>

// Header define I too. (for _Complex_I)
// Warning: Complex is a feature, not necessarily available

int main() {

    #ifdef _Complex_I
    float _Complex a = 1 + 3 * _Complex_I;

    // is equal to

    float complex a2 = 1 + 3 * I;

    (void)a;
    (void)a2;
    #endif
    return (0);
}