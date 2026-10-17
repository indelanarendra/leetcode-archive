void rotate(int** matrix, int matrixSize, int* matrixColSize) 
{
    int n = matrixSize;
    int m = *matrixColSize;
    int transpose[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            transpose[j][i]=matrix[i][j];
        }
    }
    
    for(int i=0;i<n;i++)
    {
        int k=m-1;
        for(int j=0;j<m;j++)
        {
            matrix[i][j]=transpose[i][k];
            k--;
        }
    }
     
    
}