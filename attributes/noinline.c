//
// Created by raykuzu on 19/03/2020.
// Targets: functions
// Effects: optimization
// Force compiler to not apply inlining to a function (see inline.txt)
//

__attribute__((noinline)) void func() {
}

int main() {
    func();
    return (0);
}