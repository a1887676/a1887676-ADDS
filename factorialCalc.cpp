int factorialCalc(int n, int acc) {
 if(n==1){
    return 1;
}

 return factorialCalc(n-1, acc*n);

}