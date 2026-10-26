char* tictactoe(int** moves, int movesSize, int* movesColSize) {

char A[8];
char B[8];
char *player;
int i = 0;

for(i=0; i<movesSize; i++){
    int r=moves[i][0];
    int c=moves[i][1];
    
    player = (i%2 ==0) ? A: B;
    
    player[r]++;
    player[c+3]++;
    
    if(r==c) player[6]++;
    if(r == 2-c) player[7]++;
}

for(i=0; i<8; i++){
    if(A[i]==3) return "A";
    if(B[i]==3) return "B";
}

return movesSize==9 ? "Draw":"Pending";

}