//
// Created by raykuzu on 19/03/2020.
// Targets: functions, variables, types
// Effects: clean code/trigger warning if necessary
// The attribute deprecated allow to make a smooth transition between 2 not
// backward compatible functions/variables/types
//


__attribute__((deprecated)) void func() {
}

void func2() {
}

struct data_bag {
    int a;
} __attribute__((deprecated));

struct data_bag2 {
    int a;
};

__attribute__((deprecated)) int x = 0;
int x2 = 0;

int main() {
    func(); // Warning
    func2();
    struct data_bag dataBag; // Warning
    struct data_bag2 dataBag2;
    int y = x; // Warning
    int y2 = x2;

    dataBag.a = 0;
    dataBag2.a = 1;
    (void)y;
    (void)y2;
    return (0);
}
