#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Insufficient command line arguments. Usage: ./program_name <filename> <text>\n");
        return 1;
    }

    char *filename = argv[1];
    char *text = argv[2];

    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error: Unable to open the file.\n");
        return 1;
    }

    fprintf(file, "%s", text);
    fclose(file);

    printf("Text written to file successfully.\n");

    return 0;
}
