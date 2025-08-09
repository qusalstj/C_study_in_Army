int calculate(int a){
    int ops=1,many=0;
    while(ops*2<=a){
        ops*=2;
        many++;}
    return many;
}

int main(void){
    int what;
    scanf("%d",&what);
    printf("%d",calculate(what));
    return 0;
}