#include <stdio.h>
#include <string.h>

int main(void) {
    char arg[50];

    int running = 1;
    
    while (running) {
        fgets(arg, sizeof(arg), stdin);
        running = strcmp(arg, "quit") != 1;

        
    }

    return 0;
}