//
// Created by raykuzu on 20/03/2020.
// Targets: nothing
// Effects: utility
// _Bool keyword (or bool if you include stdbool.h) allows to declare boolean variables.
// Since C99
//

#include <stdbool.h>

// stdbool header declare too true and false

int main() {

    _Bool a = 1;

    // is equal to

    bool a2 = true;

    (void)a;
    (void)a2;
    return (0);
}