#include <stdbool.h>

bool isValid(char* s) {
    int len = strlen(s);
    if (len %2 != 0)
        return false;
    char stack[len + 1];
    int top = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stack[top++] = s[i];
        } else {
            if (top == 0) return false;
            char c = stack[--top];
            if ((s[i] == ')' && c != '(') ||
                (s[i] == '}' && c != '{') ||
                (s[i] == ']' && c != '[')) {
                return false;
            }
        }
    }
    return top == 0;
}