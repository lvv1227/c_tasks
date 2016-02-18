void swap_min(int *m[], unsigned rows, unsigned cols)
{
    if((rows==0)&&(cols==0))
        return;
    int min=m[0][0];
    int row=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(m[i][j]<min){
                min=m[i][j];
                row=i;
            }

        }
    }
    if(row!=0){
        int *tmp=m[0];
        m[0]=m[row];
        m[row]=tmp;
    }
}
