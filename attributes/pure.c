//
// Created by raykuzu on 19/03/2020.
// Targets: functions
// Effects: optimization
// Attribute pure notify to compiler that the function have no effect but the return
// and the return depend on parameters and/or global variables
//

int glob = 0;

__attribute__((pure)) int func(int a, int b) {
    return (a * b + glob);
}

int main() {
    int res = func(3, 4);

    (void)res;
    return (0);
}