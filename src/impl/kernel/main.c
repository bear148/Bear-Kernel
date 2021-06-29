#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("Welcome to Bear OS!\n");
    print_set_color(PRINT_COLOR_RED, PRINT_COLOR_BLACK);
    print_str("Version: 0.1.3\n");
    print_set_color(PRINT_COLOR_BLACK, PRINT_COLOR_BLACK);
    print_str("\n");
    print_set_color(PRINT_COLOR_CYAN, PRINT_COLOR_BLACK);
    print_str("To-Do\n");
    print_str("- Custom terminal\n");
    print_str("- Main Menu\n");
    print_str("- Some sort of UI\n");
    print_str("- Cursor?\n");
}
