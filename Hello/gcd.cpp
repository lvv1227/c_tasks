unsigned gcd(unsigned a, unsigned b)
{
    if(a==b)return a;
    if(a<b)return gcd(b,a);
    if(b==0)return a;
    return gcd(b,a%b);
}
