unsigned strln(const char *str)
{
    unsigned int len=0;
    while(*str!='\0'){
        str++;
        len++;
    }
    return len;
}
