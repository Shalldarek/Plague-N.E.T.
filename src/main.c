#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "AppConfig.h"
#include "args.h"

int main(int argc, char *argv[]) {
    struct AppConfig my_config = {NULL, -1, -1.0, NULL};

    if (parse_arguments(argc, argv, &my_config) == false) {
        fprintf(stderr, "Program was terminated due to invalid arguments.\n");
        return 1; 
    }

    printf("--- PARSING WAS SUCCESSFUL ---\n");
    printf("CSV file: %s\n", my_config.real_data_path);
    printf("Infectious days: %d\n", my_config.infectious_days);
    printf("Infections per day: %f\n", my_config.infections_per_day);
    printf("Output file: %s\n", my_config.output_path);

    return 0;
}