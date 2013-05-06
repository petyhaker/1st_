#include <stdio.h>
#include <stdlib.h> 

typedef struct atomo 
{
       int upsos;
       int fulh;
} paikths;

void quicksort(paikths *arrayData[], int left, int right) {
   int i, j, p, temp;
   i = left; j = right; p = arrayData[(left+right)/2]->upsos;
   do {
      while(arrayData[i]->upsos < p && i < right)  i++;
      while(p < arrayData[j]->upsos && j > left)  j--;
      if(i <=j) {
          temp = arrayData[i]->upsos;
          arrayData[i]->upsos = arrayData[j]->upsos;
          arrayData[j]->upsos = temp;
          i++;
          j--;
        }
    }  while (i <= j);
    if(left <j) 
      quicksort(arrayData, left, j);
    if(i < right) 
      quicksort(arrayData, i, right);   
 }

int main()
{
    int N, M, c;
    int i, k, l;
    int u, f;
    int count, diaf, min;
    min =0; 
    
    scanf("%i %i", &N, &M);
    
    paikths *a[N];
    int b[M+1];
    for (i=0; i<=M; i++) {b[i] = 0;}
    
    for (i=0; i<N; i++) 
    {
        a[i] = (paikths *) malloc (sizeof (paikths));
        scanf("%i %i", &f, &u); 
        a[i]->fulh = f; 
        a[i]->upsos = u; 
    }
    
    quicksort(a, 0, N-1);
    
    //for (i=0; i<N; i++) {printf("%i %i \n", a[i]->fulh, a[i]->upsos); }
    k=0; l=0; count = 1;
    while (l < N) 
    {
          while (count != 0)
          {
                f = a[l]->fulh;
                b[f] ++;
                l ++;
                count = 0;
                for (i=1; i<=M; i++) { if ( b[i] = 0) count++; }
          }
          
          
          diaf = a[l-1]->upsos - a[k]->upsos;
          if ( k=0 ) { min = diaf; }
          else if (diaf < min) min = diaf;
          
          f = a[k]->fulh;
          b[f] --;
          for (i=1; i<=M; i++) { if ( b[i] = 0) count++; }
          k++;
          
    }
    
    printf("%i", min);
    scanf("%i", &c);
    return 0; 
}
