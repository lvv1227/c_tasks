#include <iostream>


/*
to be put in main
char *str=getmline();
    std::cout<<str;*/
char *resize(char *str, unsigned size, unsigned new_size)
{
	if(new_size<=size)
        return (char*)str;
	char *m=new char[new_size];
	char *mp=m;
	const char *p=str;
	int i=0;
	while(i++<size){
        *mp=*p;
        mp++;
        p++;
	}

	return m;
}

char *getmline()
{
    int size=10;
    char *buffer=new char[size];
    int pos=0;

    char c='\0';
    while (std::cin.get(c)) {
        if(c=='\n')
            break;
        buffer[pos]=c;
        pos++;
        if(pos>=size-1){
            int new_size=size*2;
            char *new_buffer=resize(buffer,size,new_size);
            size=new_size;
            delete[] buffer;
            buffer=new_buffer;
        }
    }
    buffer[pos]='\0';
    return buffer;

}



