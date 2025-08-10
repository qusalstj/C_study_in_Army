int main(void){
    int arr[5], result=0, min,max;
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);}
    max=arr[0];
    min=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];}
        else if(arr[i]<min){
            min=arr[i];}
        result+=arr[i];}
    printf("%d %d %d",max,min,result);
    return 0;
}