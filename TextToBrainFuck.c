#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void generate_brainfuck(int target, int *current, FILE *output) {
    if (target > *current) {
        fprintf(output, "%s", "+");
        (*current)++;
    } else if (target < *current) {
        fprintf(output, "%s", "-");
        (*current)--;
    } else {
        fprintf(output, "%s", ".");
    }
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <input_file> <output_file>\n", argv[0]);
        return 1;
    }

    FILE *input = fopen(argv[1], "r");
    if (input == NULL) {
        perror("Error opening input file");
        return 1;
    }

    FILE *output = fopen(argv[2], "w");
    if (output == NULL) {
        perror("Error opening output file");
        fclose(input);
        return 1;
    }

    int c;
    int current = 0;

    while ((c = fgetc(input)) != EOF) {
        while (c != current) {
            generate_brainfuck(c, &current, output);
        }
        fprintf(output, ".");
    }

    fclose(input);
    fclose(output);
    printf("Brainfuck code generated successfully.\n");

    return 0;
}
