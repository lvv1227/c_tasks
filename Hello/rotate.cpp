void rotate(int a[], unsigned size, int shift)
{

    for(int i=0;i<shift%size;i++){
        int tmp=a[0];
        for(int j=1;j<size;j++){
            a[j-1]=a[j];

        }
        a[size-1]=tmp;
    }


}
