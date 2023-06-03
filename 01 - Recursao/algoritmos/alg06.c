int soma(int n, int acc){
    if(n == 0){
        return acc;
    }else{
        return 
        soma(n-1,acc+n);
    }
}

int soma(int n){
    return soma(n, 0);
}