int main(void){
    int num=2, finish=0, result=0;
    while(finish<10){
        result=0;
        for(int i=1;i<=num;i++){
            if(num%i==0)
                result++;}
        if(result==2){
            printf("%d",num);
            finish++;
            num++;}}
    return 0;
}