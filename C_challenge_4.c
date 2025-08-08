int main(void){
    int shrimp=700, cream=500,coke=400;
    for(int i=1;i<3500%shrimp;i++){
        for(int j=1;j<3500/cream;j++){
            for(int k=1;k<3500/coke;k++){
                if(shrimp*i+cream*j+coke*k==3500)
                    printf("%d %d %d",cream,shrimp,coke);
                    }}}
    return 0;}