//
// Created by raykuzu on 20/03/2020.
// Targets: variables
// Effects: special needs
// Volatile keyword forbids compiler to optimize the interactions with this variable.
// It's useful when the variable can be modify by other thing than the code wrote.
// -> hardware, thread, signal, ...
//


int main() {

    int a = 0; // variable that can be modify by some hardware but with forgot volatile
    volatile int a2 = 0; // variable that can be modify by some hardware

    // In a loop like that the compiler can say hum I see the code, the variable will
    // be never change I will check once and go inf loop
    while (a == 0) {
        // inf loop
    }

    while (a2 == 0) {
        // inf loop but compiler will check every time so if it's modify by hardware
        // it will the loop as expected
    }

    // It can be useful too if you do some assignment which must be done in
    // the explicitly written order -> compiler can change assignment order for
    // optimization.
    (void)a;
    return (0);
}