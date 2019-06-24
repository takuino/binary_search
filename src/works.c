#include <stdio.h>

int n;
int k;
int A[100000];

int p(int x){
    int i;
    int need = 1;
    int sum = 0;
    for(i = 0; i < n; i++){
        if (A[i] > x){return 0;}
        sum += A[i];
        if(sum > x){sum = 0; i--; need++;}
        }
return need <= k;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    lb = 0;
    ub = 1000000000;
    while(ub - lb > 1){
        int x = (lb + ub)/2;
        if(p(x)) ub = x;
        else lb = x;
    }
    printf("%d\n", ub);


  return 0;
}
