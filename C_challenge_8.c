int box(int a){
    if (a==0)
        return 1;
    return 2*box(a-1);
}

int main(void){
    int what;
    scanf("%d",&what);
    printf("%d",box(what));
    return 0;
}