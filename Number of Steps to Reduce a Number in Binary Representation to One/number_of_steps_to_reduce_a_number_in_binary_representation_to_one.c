int numSteps(char* s) {
    int count = 0;
    int i = strlen(s) - 1;

    while (i > 0) {
        if (s[i] == '1') {
            count += 2;
            i--;
            for (;i >= 0 && s[i] == '1'; i--)
                count++;
            if (i > 0)
                s[i] = '1';
        } else {
            count++;
            i--;
        }
    }
    return count;
}