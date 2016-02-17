char *resize(const char *str, unsigned size, unsigned new_size)
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
	delete[] str;
	return m;
}
