#include <stdio.h>

#define MAX_LENGTH 100

int main() {
    int length;
    scanf("%d", &length);
    char text[MAX_LENGTH];
    const int valueK = 1; // Value for 'K'
    const int valueV = 2; // Value for 'V'

    scanf("%s", text);

    int vkcnt = 0; // cnt of 'VK' pairs

    for (int i = 0; i < length - 1; i++) {
        if (text[i] == 'V' && text[i + 1] == 'K') {
            vkcnt++;
        }
    }

    // Maximize 'VK' count by changing one character
    int maxvkcnt = vkcnt;
    for (int i = 0; i < length; i++) {
        char temp = text[i]; // temp stronge
        text[i] = (temp == 'V') ? 'K' : 'V'; // Change character
        int newvkcnt = 0;

        for (int j = 0; j < length - 1; j++) {
            if (text[j] == 'V' && text[j + 1] == 'K') {
                newvkcnt++;
            }
        }

        maxvkcnt = (newvkcnt > maxvkcnt) ? newvkcnt : maxvkcnt; // Update max count

        text[i] = temp; // recover
    }
    printf("%d\n", maxvkcnt);

    return 0;
}
// Writen by Mostly_Harmless