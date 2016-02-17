
int ** create_array2d (int a, int b) { //a rows b columns
    int ** m = new int *[a];
    for (int i = 0; i != a; ++i)
        m[i] = new int[b];
    return m;
}


int ** transpose( const int *  const * m, unsigned rows, unsigned cols)
{
    int **m_new=create_array2d(cols,rows);
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            m_new[j][i]=m[i][j];
        }
    }
    return m_new;
}
