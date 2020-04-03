//
// Created by raykuzu on 19/03/2020.
// Targets: functions
// Effects: optimization
// Attribute const notify to compiler that the function have no effect but the return
// and the return depend on parameters only (globals forbidden),
// no pointer is dereferenced and eventual subcalls to a function must be const too
//

__attribute__((const)) int square(int x) {
    return (x * x);
}

int main() {
    int res = square(5);

    (void)res;
    return (0);
}