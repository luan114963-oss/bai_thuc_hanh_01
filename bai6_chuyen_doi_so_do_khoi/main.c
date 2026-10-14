int ktra(int n){
  if(n<=0) return 0;
  int S=0;
  for(int i=1; i<=n/2; i++){
    if(n%i==0) S+=i;
  }
  if(S==n) returen 1;
  return 0;
}
