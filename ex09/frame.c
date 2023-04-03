#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_frame(char *word, const size_t longest_word_len)
{
    size_t padding = longest_word_len - strlen(word);
    printf("* %s", word);
    for (size_t i = 0; i < padding; i++) {
        printf(" ");
    }
    printf(" *\n");
}

void print_word_frames(char *input)
{
    char *input_copy = strdup(input);
    char *word = strtok(input_copy, " ");

    size_t longest_word_len = strlen(word);
    while (word != NULL) {
        size_t word_len = strlen(word);
        if (word_len > longest_word_len) {
            longest_word_len = word_len;
        }
        word = strtok(NULL, " ");
    }

    for (size_t i = 0; i < longest_word_len + 4; i++) {
        printf("*");
    }
    printf("\n");

    word = strtok(input, " ");
    while (word != NULL) {
        print_frame(word, longest_word_len);
        word = strtok(NULL, " ");
    }

    for (size_t i = 0; i < longest_word_len + 4; i++) {
        printf("*");
    }
    printf("\n");

    free(input_copy);
}

int main(int argc, char *argv[])
{
    if (argc < 2) {
        return 0;
    }
    print_word_frames(argv[1]);
    return 0;
}
