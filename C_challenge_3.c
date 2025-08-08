int gcd(int a, int b){
    int result =1;
    for(int i=1;i<=b;i++){
        if((a%i==0)&&(b%i==0))
            result=i;}
    return result;
}

int main(void){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
        printf("%d",gcd(num1,num2));
    else if(num1<num2)
        printf("%d",gcd(num2,num1));
    else
        printf("nope");
    return 0;
}