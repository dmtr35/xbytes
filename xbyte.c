#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *sp, *str = argv[1];
    size_t leng;

    while ((sp = strchr(str, ' ')) != 0) {
        leng = strlen(sp);
        for (int i = 0; i < leng; ++i) {
            sp[i] = sp[i+1];
        }
    }

    leng = strlen(str);

    if (leng % 2 == 1) {
        printf("error: Incorrect number of characters\n");
        return 1;
    }


    for (int i = 0; i < leng; i+=2) {
        printf("\\x%c%c", str[i], str[i+1]);
    }
    printf("\n");
}




// 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 11 04 00 00 00 00 00 00 63 61 74 20 2E 70 61 73 73 77 64