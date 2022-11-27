#include <stdlib.h>
#include <stdio.h>
#include <config.h>
#include <string.h>

char *config = 0;

char* fileToChar(FILE *file) {

    fseek(file, 0, SEEK_END);
    unsigned int size = ftell(file);
    fseek(file, 0, SEEK_SET);

}

void loadConfig(char* filename) {
    FILE *config = fopen(filename, "rb");

    fileToChar(config);
}
