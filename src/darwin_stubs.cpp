// Simple stubs for missing Darwin-specific functions
#include <stdio.h>

extern "C" void guialert(const char* message) {
    // Simple implementation - just print to stdout
    printf("GUI Alert: %s\n", message);
}

extern "C" int main(int argc, char* argv[]) {
    extern int SDL_main(int argc, char* argv[]);
    return SDL_main(argc, argv);
}

// C++ function (not extern "C")
void refreshMenuKeys() {
    // Stub implementation - does nothing
}