#include <iostream>
using namespace std;
int ** create_array2d (int a, int b);
int ** transpose( const int * const * m, unsigned rows, unsigned cols);
void print(int **m,int rows,int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            std::cout<<m[i][j]<<" ";
        }
        std::cout<<endl;
    }
}
int main()
{
  /*int a[]={1,2,3};
  rotate(a,3,2);
  for(int i=0;i<3;i++){
    std::cout<<a[i]<<" ";
  }*/

    /*char *str=getmline();
    std::cout<<str;*/


    int **m=create_array2d(2,1);
    m[0][0]=1;
    //m[0][1]=1;
    m[1][0]=2;
    //m[1][1]=2;
    int **res=transpose(m,2,1);
    print(m,2,1);
    print(res,1,2);
    return 0;

}
