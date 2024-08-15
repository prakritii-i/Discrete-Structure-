#include <stdio.h>
#include <string.h>

int main() {
    int i, x, key;
    char str[100];

    printf("Please enter a string:\t");
    scanf("%s", str);

    printf("\nPlease choose following options:\n");
    printf("1 = Encrypt the string.\n");
    printf("2 = Decrypt the string.\n");
    scanf("%d", &x);

    printf("Enter the key: ");
    scanf("%d", &key);

    switch (x) {
        // For Encryption
        case 1:
            for (i = 0; (i < strlen(str) && str[i] != '\0'); i++) {
                str[i] = ((str[i] + key - 97) % 26 + 65); // the key for encryption is added to ASCII value
            }
            printf("\nEncrypted string: %s\n", str);
            break;

        // For Decryption
        case 2:
            for (i = 0; (i < 100 && str[i] != '\0'); i++) {
                str[i] = ((str[i] - key - 97 + 26) % 26 + 65); // the key for decryption is subtracted from ASCII value
            }
            printf("\nDecrypted string: %s\n", str);
            break;

        default:
            printf("\nInvalid Input !!!\n");
    }
    return 0;
}

