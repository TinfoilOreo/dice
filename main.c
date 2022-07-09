#include <stdio.h>
#include <string.h>

typedef struct dice {
    int sides;
    char name[50];
} dice;

typedef struct dice_registry {
    dice dice[50];
    int dice_count;
} dice_registry;

void push_dice(dice_registry registry, dice die) {
    registry.dice[registry.dice_count] = die;
    registry.dice_count++;
}

int main(void) {
    char arg[256];

    dice_registry registry;

    int running = 1;
    
    while (running) {
        fgets(arg, sizeof(arg), stdin);
        running = strcmp(arg, "quit") != 1;

        char args[10][50];
        int arg_idx = 0;
        int ind_arg_idx = 0;
        for (size_t i = 0; i < strlen(arg); i++) {
            if (arg[i] == ' ') {
                args[arg_idx][ind_arg_idx] = 0;
                arg_idx++;
                ind_arg_idx = 0;
            }
            else {
                args[arg_idx][ind_arg_idx] = arg[i];
                ind_arg_idx++;
            }
        }

        if (strlen(arg) > 0) {
            arg_idx++;
        }

        if (strcmp(args[0], "add") == 1) {
            
        }
    }

    return 0;
}