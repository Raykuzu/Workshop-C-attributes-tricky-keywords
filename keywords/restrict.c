//
// Created by raykuzu on 20/03/2020.
// Targets: variables, parameters (only pointer)
// Effects: optimization
// Restrict keyword notify compiler that the pointer is the only one who access to his value
// It's a big optimization but it's risky -> be rigorous
// Since C99
//

int main() {

     char *restrict a = "Hello";

     char *b = a;

     //*b = 'o'; -> Forbidden (undefined behavior)
    (void)a;
    return (0);
}