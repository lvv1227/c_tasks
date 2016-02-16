#include <iostream>
using namespace std;
void replace(){
    char c = '\0';
    bool space=false;
    while (cin.get(c)) {
        if(c!= ' '){
            std::cout << c;
            space=false;
        }
        else{
            if(!space)
                std::cout << c;
            space=true;

        }
    }
}
