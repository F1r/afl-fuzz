#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static void usage(char* argv0)
{
    printf("\n%s -S MAP_SIZE_POW\n(2 <= MAP_SIZE_POW <=18)\n", argv0);
}

int main(int argc, char** argv)
{
    int opt;
    uint64_t MAP_SIZE_POW = 0;
    while((opt=getopt(argc, argv, "S:")) != -1)
    {
        switch(opt)
        {
            case 'S':
                MAP_SIZE_POW = (uint64_t)atoi(optarg);
                break;
            default:
                usage(argv[0]);
                return 0;
        }
    }
    if(MAP_SIZE_POW < 2)
        MAP_SIZE_POW = 16;
    char *config_bkp_path = (char *)malloc(4096);
    char *config_path = (char *)malloc(4096);

    memset(config_bkp_path, 0, 4096);
    memset(config_path, 0, 4096);

    getcwd(config_bkp_path, 4096);
    memcpy(config_bkp_path + strlen(config_bkp_path), "/.config.h.bkp\0", 15);
    getcwd(config_path, 4096);
    memcpy(config_path + strlen(config_path), "/config.h\0", 10);


    FILE *config_bkp = fopen(config_bkp_path, "r");
    FILE *config = fopen(config_path, "w");
    if(config_bkp == NULL || config == NULL)
    {
        printf("config.h init error\n");
        return 0;
    }
    char line[4096];
    while (fgets(line, 4095, config_bkp) != NULL)
    {
        if(!memcmp("//TO DEFINE MAP_SIZE_POW2 HERE\n", line, 31))
        {
            fprintf(config, "#define MAP_SIZE_POW2\t%ld\n", MAP_SIZE_POW);
        }
        else
        {
            fputs(line, config);
        }
    }
    free(config_bkp_path);
    free(config_path);
    fclose(config_bkp);
    fclose(config);
    return 0;
}
