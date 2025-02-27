#include <stdio.h>
#include <string.h>

#define FLAG_LEN 35  
const char xor_key = 0x5A;  
const unsigned char encrypted_flag[FLAG_LEN] = {
    60, 54, 59, 61, 33, 35, 53, 47, 5, 50, 
    59, 44, 63, 5, 54, 63, 59, 40, 52, 63, 
    62, 5, 60, 54, 59, 61, 5, 57, 50, 63, 
    57, 49, 63, 40, 39
};

void check_flag(const char *input) {
    if (strlen(input) != FLAG_LEN) {
        printf("Incorrect flag!\n");
        return;
    }

    for (int i = 0; i < FLAG_LEN; i++) {
        if ((input[i] ^ xor_key) != encrypted_flag[i]) {
            printf("Incorrect flag!\n");
            return;
        }
    }

    printf("Correct! Well done.\n");
}

int main() {
    char user_input[FLAG_LEN + 1];
    printf("Enter the flag: ");
    fgets(user_input, sizeof(user_input), stdin);

    user_input[strcspn(user_input, "\n")] = 0;

    check_flag(user_input);
    return 0;
}
