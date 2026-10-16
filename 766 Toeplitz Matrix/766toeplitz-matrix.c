bool isToeplitzMatrix(int** matrix, int matrixSize, int* matrixColSize) 
{
    int row = matrixSize;
    int col=*matrixColSize;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            int start=i+1;
            int end=j+1;
            while(start!=row && end!=col)
            {
                if(matrix[i][j]!=matrix[start][end])
                return 0;
                start++;
                end++;
            }
        }
    }
    return 1;
    
}