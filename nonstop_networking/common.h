/**
 * nonstop_networking
 * CS 341 - Spring 2023
 */
#pragma once
#include <stddef.h>
#include <sys/types.h>

#define LOG(...)                      \
    do {                              \
        fprintf(stderr, __VA_ARGS__); \
        fprintf(stderr, "\n");        \
    } while (0);

typedef enum { GET, PUT, DELETE, LIST, V_UNKNOWN } verb;
ssize_t read_from_socket(int socket, char *buffer, size_t count);
ssize_t write_to_socket(int socket, const char *buffer, size_t count);
