#include <stdio.h>

int main()
{
    char dosca[8][8];

    for (int i = 0; i < 8; ++i)
        for (int j = 0; j < 8; ++j)
            dosca[i][j] = ' ';

    dosca[7][0] = 'R';
    dosca[7][7] = 'R';
    dosca[7][1] = 'N';
    dosca[7][6] = 'N';
    dosca[0][0] = 'r';
    dosca[0][7] = 'r';
    dosca[7][2] = 'B';
    dosca[7][5] = 'B';
    dosca[0][3] = 'q';
    dosca[7][3] = 'Q';
    dosca[0][1] = 'n';
    dosca[0][6] = 'n';
    dosca[0][4] = 'k';
    dosca[7][4] = 'K';
    dosca[0][2] = 'b';
    dosca[0][5] = 'b';
    for (int i = 0; i < 8; ++i) {
        dosca[1][i] = 'p';
        dosca[6][i] = 'P';
    }

    for (int i = 0; i < 8; ++i) {
        printf("%d ", 8 - i);
        for (int j = 0; j < 8; ++j) {
            printf("%c ", dosca[i][j]);
        }
        printf("\n");
    }
    printf("  a b c d e f g h\n");

    return 0;
}
