#pragma once

#include <uacpi/internal/compiler.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum uacpi_status {
    UACPI_STATUS_OK = 0,
    UACPI_STATUS_MAPPING_FAILED = 1,
    UACPI_STATUS_OUT_OF_MEMORY = 2,
    UACPI_STATUS_BAD_CHECKSUM = 3,
    UACPI_STATUS_INVALID_SIGNATURE = 4,
    UACPI_STATUS_INVALID_TABLE_LENGTH = 5,
    UACPI_STATUS_NOT_FOUND = 6,
    UACPI_STATUS_INVALID_ARGUMENT = 7,
} uacpi_status;

const char *uacpi_status_to_string(uacpi_status);

#define uacpi_unlikely_error(expr) uacpi_unlikely((expr) != UACPI_STATUS_OK)
#define uacpi_likely_error(expr)   uacpi_likely((expr) != UACPI_STATUS_OK)

#define uacpi_unlikely_success(expr) uacpi_unlikely((expr) == UACPI_STATUS_OK)
#define uacpi_likely_success(expr)   uacpi_likely((expr) == UACPI_STATUS_OK)

#ifdef __cplusplus
}
#endif