#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insertWordInMiddle(const char *filename, const char *word) {
    FILE *f = fopen(filename, "rb");
    if (!f) {
        printf("Помилка відкриття файлу для читання.\n");
        return;
    }

    fseek(f, 0, SEEK_END);
    long fileSize = ftell(f);
    long middle = fileSize / 2;

    char *firstHalf = (char *)malloc(middle);
    char *secondHalf = (char *)malloc(fileSize - middle);

    if (!firstHalf || !secondHalf) {
        printf("Помилка виділення пам'яті.\n");
        fclose(f);
        return;
    }

    fseek(f, 0, SEEK_SET);
    fread(firstHalf, 1, middle, f);
    fread(secondHalf, 1, fileSize - middle, f);
    fclose(f);

    f = fopen(filename, "wb");
    if (!f) {
        printf("Помилка відкриття файлу для запису.\n");
        free(firstHalf);
        free(secondHalf);
        return;
    }

    fwrite(firstHalf, 1, middle, f);
    fwrite(word, 1, strlen(word), f);
    fwrite(secondHalf, 1, fileSize - middle, f);

    printf("Слово успішно вставлено.\n");

    fclose(f);
    free(firstHalf);
    free(secondHalf);
}

int main(void) {
    const char *filename = "data.bin";

    insertWordInMiddle(filename, "_INSERT_");

    return 0;
}
