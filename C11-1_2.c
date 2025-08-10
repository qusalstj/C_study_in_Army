int main(void){
    int num;
    char arr[] = {'G','o','o','d',' ','t','i','m','e'};
    num=sizeof(arr)/sizeof(char);
    for(int i=0;i<num;i++){
        printf("%c",arr[i]);}
    return 0;
}