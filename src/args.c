#include <stdio.h>
#include "args.h"

bool parse_arguments(int argc, char *argv[], struct AppConfig *config) {
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--real_data_path") == 0 && i + 1 < argc) {
            config->real_data_path = argv[++i];
        } else if (strcmp(argv[i], "--infectious_days") == 0 && i + 1 < argc) {
            config->infectious_days = atoi(argv[++i]);
        } else if (strcmp(argv[i], "--infections_per_day") == 0 && i + 1 < argc) {
            config->infections_per_day = atof(argv[++i]);
        } else if (strcmp(argv[i], "--output_path") == 0 && i + 1 < argc) {
            config->output_path = argv[++i];
        } else {
            fprintf(stderr, "Unknown argument: %s\n", argv[i]);
            return false;
        }
    }

    return true;
}