#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fin, *fout;
    char ch;

    fin = fopen("input.txt", "r");
    fout = fopen("output.txt", "w");

    if (fin == NULL || fout == NULL) {
        printf("Помилка відкриття файлів.\n");
        if (fin) fclose(fin);
        if (fout) fclose(fout);
        return 1;
    }

    while ((ch = fgetc(fin)) != EOF) {
        if (ch == '0') {
            fputc('1', fout);
        } else if (ch == '1') {
            fputc('0', fout);
        } else {
            fputc(ch, fout);
        }
    }

    printf("Файл успішно оброблено.\n");

    fclose(fin);
    fclose(fout);

    return 0;
}