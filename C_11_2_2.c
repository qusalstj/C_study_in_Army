int main(void){
    char str[20];
    int len=0;
    scanf("%s",str);
    while(str[len]!='\0'){
        len++;}
    for(int i=0;i<len/2;i++){
        char box;
        box=str[len-1-i];
        str[len-1-i]=str[i];
        str[i]=box;}
    printf("%s\n",str);
}