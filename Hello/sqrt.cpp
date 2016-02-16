#include <iostream>
#include <cmath>
void solve (){
    int a;
    int b;
    int c;
    std::cin >>a>>b>>c;


    int D=b*b-4*a*c;
    if(D<0)
        std::cout<<"No real roots";
    else if (D==0){
        double x=-(double)b/(2*a);
        std::cout << x << " "<< x;
    }
    else{
        double ds=sqrt(D);
        double x1=(-b-ds)/(2*a);
        double x2=(-b+ds)/(2*a);
         std::cout << x1 << " "<< x2;
    }
}
