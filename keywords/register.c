//
// Created by raykuzu on 19/03/2020.
// Targets: variables
// Effects: special needs/optimization
// Register keyword force the compiler to use a register for the variable
// It's useful when a variable is used a lot but naturally the compiler will choose
// which variables to put in the registers -> use sparingly
//


int main() {

    register int x = 0;

    (void)x;
    return (0);
}

