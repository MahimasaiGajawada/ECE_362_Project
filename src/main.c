#include "pico/stdlib.h"

int main(void) {
    stdio_init_all();

    // Team 83: bring up one peripheral at a time.
    // Do not initialize unimplemented modules yet.
    while (true) {
        sleep_ms(1000);
    }
}
