char* shortestCompletingWord(char* licensePlate, char** words, int wordsSize) {
    char m[26] = { 0 }, o[26] = { 0 }, p[26], *a = NULL, *s, **w = words - 1, k, z = INT8_MAX;
    for (char *l = licensePlate - 1 ; *++l ; isalpha(*l) && m[*l <= 'Z' ? *l - 'A' : *l - 'a']++);
    for (; wordsSize-- ; !memcmp(o, p, sizeof m) && z > s - *w && (z = s - (a = *w)))
        for (memcpy(p, m, sizeof m), s = *++w - 1 ; *++s ; m[k = *s - 'a'] && p[k] && p[k]--);
    return a;
}