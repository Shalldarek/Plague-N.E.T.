#pragma once

struct AppConfig {
    char* real_data_path;
    int infectious_days;
    double infections_per_day;
    char* output_path;
};