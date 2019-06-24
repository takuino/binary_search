#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    lb = 0;
    ub = 1000000001;
    while(ub - lb > 1){
        int x = (lb + ub)/2;
        int sum = 0;
        for(i = 0; i < n; i++){
            sum += A[i] / x;
        }
        if(sum < k) ub = x;
        else lb = x;
    }
    printf("%d\n", ub);
    return 0;
}
