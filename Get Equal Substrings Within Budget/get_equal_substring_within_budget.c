int max(int a, int b) {
    return (a > b) ? a : b;
}

int equalSubstring(char* s, char* t, int maxCost) {
    int maxLen = 0;
    int start = 0;
    int cost = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        cost += abs(s[i] - t[i]);
        while (cost > maxCost) {
            cost -= abs(s[start] - t[start]);
            start++;
        }
        maxLen = max(maxLen, i - start + 1);
    }
    return maxLen;
}