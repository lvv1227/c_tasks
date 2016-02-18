
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


/* for main

void print(int **m,int rows,int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            std::cout<<m[i][j]<<" ";
        }
        std::cout<<endl;
    }
}



int **m=create_array2d(2,1);
    m[0][0]=1;
    //m[0][1]=1;
    m[1][0]=2;
    //m[1][1]=2;
    int **res=transpose(m,2,1);
    print(m,2,1);
    print(res,1,2);
    return 0;
*/
