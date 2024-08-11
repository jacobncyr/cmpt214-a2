#include <cstdlib>
#include <cstdio>
#include <cassert>

#include <unistd.h>

// process -- read strings from stdin and process them
//            returns EXIT_SUCCESS on successful completion
//                    EXIT_FAILURE on unsuccessful completion
int process(void);


// main -- process command-line arguments
int main(int argc, char* argv[]) {

    int opt;
    while (-1 != (opt = getopt(argc, argv, ":h"))) {
        switch (opt) {
        case 'h':  printf("%s: my RPN calculator\n", argv[0]);
            printf("options:    -h  show this help\n");
            return EXIT_SUCCESS;
            break;

        case '?':
        default:  printf("%s: unknown option: %c\n", argv[0], opt);
            return EXIT_FAILURE;
            break;
        }
    }

    return process();
}


// CMD_SIZE -- assumed size for an input string/command
const int CMD_SIZE = 80;

// process -- read commands from stdin and process them
//            returns EXIT_SUCCESS on successful completion
//                    EXIT_FAILURE on unsuccessful completion
int process(void) {
    char cmd[CMD_SIZE + 1];	// ensure space for tombstone
    float myFloat;
    while (0 == feof(stdin)) {
        if (0 != scanf("%s", cmd)) {
            if (sscanf(cmd, "%f", &myFloat) == 1) {
                printf("%.2f -- number\n", myFloat);
            }
            printf("%s\n", cmd);
        }
    }

    return EXIT_SUCCESS;
}
