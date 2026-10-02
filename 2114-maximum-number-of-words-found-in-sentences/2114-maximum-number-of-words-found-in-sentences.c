
int mostWordsFound(char **s, int sSize) {
    int max = 0;
    for (int i = 0; i < sSize; i++) {
        int cnt = 1;
        for (int j = 0; s[i][j] != '\0'; j++) {
            if (s[i][j] == ' ')
                cnt++;
        }
        if (cnt > max) max = cnt;
    }
    return max;
}