//1A1F1A1B1A1D1D1D1A2B2C2E3F3F3E3E
// 1O1R2F2F3R3H3J4Y5I6A9L9O9E9E9WCC
#include <stdio.h>
int main() {
    char str[200];
    scanf("%s", str);
	int i, j = 0, k = 0 ;
    char char1[200], char2[200];
    int var1 = 0, var2 = 0, var3 = 0, var4 = 0, var5 = 0, var6 = 0, var7 = 0, var8 = 0, var9 = 0, var10 = 0, var11 = 0, var12 = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (i % 2 == 0) {
            char1[j++] = str[i];
        } else {
            char2[k++] = str[i];
        }
    }

    char foundChars1[26] = {0};
    char foundChars2[26] = {0};
    char foundChars3[26] = {0};
    char foundChars4[26] = {0};
    char foundChars5[26] = {0};
    char foundChars6[26] = {0};
    char foundChars7[26] = {0};
    char foundChars8[26] = {0};
    char foundChars9[26] = {0};
    char foundChars10[26] = {0};
    char foundChars11[26] = {0};
    char foundChars12[26] = {0};
    char foundChars13[26] = {0};

    for (i = 0; i < 16; i++) {
         if (char1[i] == '1') 
         {
              char currentChar = char2[i];

                if (currentChar >= 'A' && currentChar <= 'Z') {
                    int index = currentChar - 'A';

                    if (foundChars1[index] == 0) {
                        var1 += 1;
                        foundChars1[index] = 1;
                    }
                }
        } else if (char1[i] == '2') {
            {
                char currentChar = char2[i];

                if (currentChar >= 'A' && currentChar <= 'Z') {
                    int index = currentChar - 'A';

                    if (foundChars2[index] == 0) {
                        var2 += 1;
                        foundChars2[index] = 1;
                    }
                }
            }
        } else if (char1[i] == '3') {
            {
                char currentChar = char2[i];

                if (currentChar >= 'A' && currentChar <= 'Z') {
                    int index = currentChar - 'A';

                    if (foundChars3[index] == 0) {
                        var3 += 1;
                        foundChars3[index] = 1;
                    }
                }
            }
        } else if (char1[i] == '4') {
            {
                char currentChar = char2[i];

                if (currentChar >= 'A' && currentChar <= 'Z') {
                    int index = currentChar - 'A';

                    if (foundChars4[index] == 0) {
                        var4 += 1;
                        foundChars4[index] = 1;
                    }
                }
            }
        } else if (char1[i] == '5') {
            {
                char currentChar = char2[i];

                if (currentChar >= 'A' && currentChar <= 'Z') {
                    int index = currentChar - 'A';

                    if (foundChars5[index] == 0) {
                        var5 += 1;
                        foundChars5[index] = 1;
                    }
                }
            }
        } else if (char1[i] == '6') {
            {
                char currentChar = char2[i];

                if (currentChar >= 'A' && currentChar <= 'Z') {
                    int index = currentChar - 'A';

                    if (foundChars6[index] == 0) {
                        var6 += 1;
                        foundChars6[index] = 1;
                    }
                }
            }
        } else if (char1[i] == '7') {
             {
                char currentChar = char2[i];

                if (currentChar >= 'A' && currentChar <= 'Z') {
                    int index = currentChar - 'A';

                    if (foundChars7[index] == 0) {
                        var7 += 1;
                        foundChars7[index] = 1;
                    }
                }
            }
        } else if (char1[i] == '8') {
             {
                char currentChar = char2[i];

                if (currentChar >= 'A' && currentChar <= 'Z') {
                    int index = currentChar - 'A';

                    if (foundChars8[index] == 0) {
                        var8 += 1;
                        foundChars8[index] = 1;
                    }
                }
            }
        } else if (char1[i] == '9') {
             {
                char currentChar = char2[i];

                if (currentChar >= 'A' && currentChar <= 'Z') {
                    int index = currentChar - 'A';

                    if (foundChars9[index] == 0) {
                        var9 += 1;
                        foundChars9[index] = 1;
                    }
                }
            }
        } else if (char1[i] == 'A') {
            {
                char currentChar = char2[i];

                if (currentChar >= 'A' && currentChar <= 'Z') {
                    int index = currentChar - 'A';

                    if (foundChars10[index] == 0) {
                        var10 += 1;
                        foundChars10[index] = 1;
                    }
                }
            }
        } else if (char1[i] == 'B') {
            {
                char currentChar = char2[i];

                if (currentChar >= 'A' && currentChar <= 'Z') {
                    int index = currentChar - 'A';

                    if (foundChars11[index] == 0) {
                        var11 += 1;
                        foundChars11[index] = 1;
                    }
                }
            }
        } else if (char1[i] == 'C') {
             {
                char currentChar = char2[i];

                if (currentChar >= 'A' && currentChar <= 'Z') {
                    int index = currentChar - 'A';

                    if (foundChars12[index] == 0) {
                        var12 += 1;
                        foundChars12[index] = 1;
                    }
                }
            }
        }
    }
     int max = var1;
    if (var2 > max){
        max = var2;
    } if (var3 > max){
        max = var3;
    } if (var4 > max){
        max = var4;
    } if (var5 > max){
        max = var5;
    } if (var6 > max){
        max = var6;
    } if (var7 > max){
        max = var7;
    } if (var8 > max){
        max = var8;
    } if (var9 > max){
        max = var9;
    } if (var10 > max){
        max = var10;
    } if (var11 > max){
        max = var11;
    } if (var12 > max){
        max = var12;
    }

    printf("%d\n", var1);
    printf("%d\n", var2);
    printf("%d\n", var3);
    printf("%d\n", var4);
    printf("%d\n", var5);
    printf("%d\n", var6);
    printf("%d\n", var7);
    printf("%d\n", var8);
    printf("%d\n", var9);
    printf("%d\n", var10);
    printf("%d\n", var11);
    printf("%d\n", var12);
    printf("%d",max);

    return 0;
}


