char * getHint(char * secret, char * guess){
    int len = strlen(secret), cows = 0, bulls = 0;
    int secretCount[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int guessCount[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < len; i++) {
        if (secret[i] == guess[i]) {
            cows++;
        } else {
            secretCount[secret[i] - '0']++;
            guessCount[guess[i] - '0']++;
        }
    }
    for (int i = 0; i < 10; i++) {
        if (secretCount[i] < guessCount[i]) {
            bulls += secretCount[i];
        } else {
            bulls += guessCount[i];
        }
    }
    char* output = (char*)malloc(90 * sizeof(char));
    sprintf(output, "%dA%dB\0", cows, bulls);
    return output;
}