#include <iostream>
int strstr(const char *text, const char *pattern);
int main()
{
  /*int a[]={1,2,3};
  rotate(a,3,2);
  for(int i=0;i<3;i++){
    std::cout<<a[i]<<" ";
  }*/

  char str[]="";
  char str2[]="";
  int pos=strstr(str,str2);
  std::cout << pos;
}
