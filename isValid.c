#include <stdbool.h>
#include <string.h>
#include <stdio.h>

bool isValid(char *s) {
    int len = strlen(s);
    char stack[len];
    int top = -1;
    
    for (int i = 0; i < len; i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stack[++top] = s[i];
        }
        else if (top == -1) {
            return false;
        }
        else if (s[i] == ')' && stack[top] != '(') {
            return false;
        }
        else if (s[i] == '}' && stack[top] != '{') {
            return false;
        }
        else if (s[i] == ']' && stack[top] != '[') {
            return false;
        }
        else {
            top--;
        }
    }
    
    return top == -1;
}


int main() {
    char s[] = "()[]{}";
    
    if (isValid(s)) {
        printf("The string %s is valid.\n", s);
    }
    else {
        printf("The string %s is not valid.\n", s);
    }
    
    return 0;
}
