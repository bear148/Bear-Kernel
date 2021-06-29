#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("Welcome to Bear OS!\n");
    print_str("This is a message!\n");
    print_set_color(PRINT_COLOR_RED, PRINT_COLOR_BLACK);
    print_str("Bears are the best! So is C++!");
    print_set_color(PRINT_COLOR_BLUE, PRINT_COLOR_GREEN);
    print_str("This OS is in the VERY VERY VERY early stages. It is no where near being finished.");
}
