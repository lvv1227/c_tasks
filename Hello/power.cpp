int power(int x, unsigned p) {
    int answer=1;
    /* ������� answer */

    for(int i=0;i<p;i++){
        answer*=x;
    }
    return answer;
}
