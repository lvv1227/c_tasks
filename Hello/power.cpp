int power(int x, unsigned p) {
    int answer=1;
    /* считаем answer */

    for(int i=0;i<p;i++){
        answer*=x;
    }
    return answer;
}
