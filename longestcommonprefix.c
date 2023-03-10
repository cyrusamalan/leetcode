#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize){
    if (strsSize == 0){
        return "";
    }
    int i, j;
    for (i = 0; i < strlen(strs[0]); i++){
        for (j = 1; j < strsSize; j++){
            if (strs[j][i] != strs[0][i]){
                char* prefix = malloc(sizeof(char) * (i + 1));
                strncpy(prefix, strs[0], i);
                prefix[i] = '\0';
                return prefix;
            }
        }
    }
    return strs[0];
}

int main() {
    char* strs[] = {"flower", "flow", "flight"};
    int strsSize = 3;
    char* prefix = longestCommonPrefix(strs, strsSize);
    printf("The longest common prefix is: %s\n", prefix);
    free(prefix); // don't forget to free the memory allocated by the function
    return 0;
}

