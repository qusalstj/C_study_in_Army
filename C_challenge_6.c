void secondchanger(int a){
    int h,m,s;
    h=a/3600;
    m=(a%3600)/60;
    s=(a%3600)%60;
    printf("[h:%d m:%d s:%d]",h,m,s);
}

int main(void){
    int what;
    scanf("%d",&what);
    secondchanger(what);
    return 0;
}