//
// Created by raykuzu on 19/03/2020.
// Targets: functions
// Effects: clean code/trigger warnings if necessary
// Ask compiler to check argument following a format when using a function with format and va args
// Possibles format (first arg) are printf/scanf/strftime/strfmon
// Second arg is the position of the format in parameters and third arg is the position
// of the first arg for the format
//

__attribute__((format(printf, 2, 3))) void my_dprintf(int fd, const char *format, ...) {
    (void)fd;
    (void)format;
}

void my_dprintf2(int fd, const char *format, ...) {
    (void)fd;
    (void)format;
}

int main() {
    my_dprintf(2, "%s %d", "hello", 4);
    my_dprintf(2, "%s %d"); // Warning
    my_dprintf2(2, "%s %d"); // No warning but we need it
    return (0);
}

