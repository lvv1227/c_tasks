int strstr(const char *text, const char *pattern)
{
    const char *p=text;
    if(*text=='\0'&&*pattern=='\0')
        return 0;
    while(*p!='\0'){

        const char *pat=pattern;
        const char *p2=p;
        bool found=true;
        while(*pat!='\0'){
            if(*p2!=*pat){
                found=false;
                break;
            }
            p2++;
            pat++;
        }
        if(found){
            return (p-text);
        }

        p++;
   }
   return -1;
}
