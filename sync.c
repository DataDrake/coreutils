/*
 * This file is part of coreutils.
 *
 * Copyright 2017 Bryan T. Meyers
 *
 * coreutils is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2.0
 * of the License, or (at your option) any later version.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "coreutils.h"

void usage() {
    puts("Usage:\tsync [OPTION]");
    puts("Forces all buffered modifications for file metadata and data to be written to disk\n");
    puts("Options Available:\n");
    puts("\t\t--help\t\t- prints this message");
    puts("\t\t--version\t- displays the software version\n");
}

void version() {
    printf("sync (coreutils) v%s\n",COREUTILS_VERSION);
    puts("2017 Bryan T. Meyers\n");
    puts("License GPLv2: GNU GPL version 2 <http://gnu.org/licenses/gpl.html>.");
    puts("This is free software: you are free to change and redistribute it.");
    puts("There is NO WARRANTY, to the extent permitted by law.\n");
}

int main(int argc, char **argv){

    switch(argc) {
        case 2:
            if(strcmp(argv[1], "--help") == 0) {
                usage();
            } else if(strcmp(argv[1], "--version") == 0) {
                version();
            }
            return EXIT_SUCCESS;
        case 1:
            sync();
            return EXIT_SUCCESS;
        default:
            usage();
            return EXIT_FAILURE;
    }
}
