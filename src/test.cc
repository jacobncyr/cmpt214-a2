#include <cstdio>
#include <cstdlib>
#include<unistd.h>

int process(int,char *argv[]);

int main(int argc, char *argv[])
{	
	process(argc,argv);
	return EXIT_SUCCESS;
}

int process(int argc,char *argv[]) {
    const int CMD_SIZE = 80;
    int opt;
    char cmd[CMD_SIZE + 1];
    while ((opt = getopt(argc, argv, "ih:")) != -1)
    {
        switch (opt)
        {
        case 'h':
            printf(" -h case triggerred");
            exit(0);

        default:
            printf("default behaviour");
            exit(0);
        }
    }
    while (fgets() {
        printf("%s\n", cmd);
    }
	return EXIT_SUCCESS;
}