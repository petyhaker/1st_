#include <stdio.h>
#include <stdlib.h> 

typedef struct atomo 
{
       int upsos;
       int fulh;
} paikths;


int diafora_upsous (paikths **front, paikths **back)
{
    int a, b;
    paikths *p, *q;
    p = *front;
    a = p->upsos;
    q = *back;
    b = q->upsos;
    //printf ("%i", b-a);
    return (b-a);    
}


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

int main ()
{
    int i, l, j; 
    int u, f, c;
    int N, K;
    paikths **p, **q;
    int deikths, min;
    int flag;
    int temp;
    //files
    
    scanf("%i %i", &N, &K); //N oi katoikoi, K oi fules
    
    paikths *a[N];
    int v[K];
    for (i=0; i<N; i++) {v[i] = 0;}
    
    for (i=0; i<N; i++) 
    {
        a[i] = (paikths *) malloc (sizeof (paikths));   
        scanf("%i %i", &f, &u); 
        a[i]->upsos = u; 
        a[i]->fulh = f; 
    }
    
    quicksort(a, 0, N);
    
    i=0; l=0;
    p = &a[0]; q = &a[0]; 
    while (q != NULL)
    {
          while (flag != 0) 
          {
                flag = 0;
                q = &a[i];
                deikths = a[i]->fulh;
                v[deikths] ++;
                for (j=0; j<K; j++) { if ( v[j]=0 ) flag++; }
                i++;
          }
          
          temp = diafora_upsous(p, q);
          if (temp < min) {min = temp;}
          deikths = a[l]->fulh;
          v[deikths] --;
          for (j=0; j<K; j++) { if ( v[j]=0 ) flag++; }
          l++;
          p = &a[l]; 
    }
    
    //for (i=0; i<N; i++) { printf("%i %i \n", a[i]->fulh, a[i]->upsos); }
    printf("%i", min);
    scanf("%i", &c);
    
        
}
