//author vasiliki petychaki

#include <stdio.h>

void merge_sort (float v[], int start, int end) 
{ 
  int middle; /* the middle of the subarray */ 
  if (start == end) return; 
  if (start == end - 1) return; 
  middle = (start + end) / 2; 
  merge_sort (v, start, middle); 
  merge_sort (v, middle, end); 
  merge (v, start, middle, end); 
}

void merge (float v[], int start, int middle, int end) 
{ 
    int v1_n, v2_n, v1_index, v2_index, i; 
    v1_n = middle - start; 
    v2_n = end - middle; 
    float v1[v1_n]; float v2[v2_n]; 

    for (i=0; i<v1_n; i++) v1[i] = v[start + i]; 
         for (i=0; i<v2_n; i++) v2[i] = v[middle + i]; 
             v1_index = 0; v2_index = 0; 
             for (i=0; (v1_index < v1_n) && (v2_index < v2_n); i++) 
              { 
                    if (v1[v1_index] <= v2[v2_index]) 
                            v[start + i] = v1[v1_index++]; 
                    else 
                             v[start + i] = v2[v2_index++]; 
                } 
                 for (; v1_index < v1_n; i++) 
                          [start + i] = v1[v1_index++]; 
                                 for (; v2_index < v2_n; i++) 
                                        v[start + i] = v2[v2_index++]; 
 } 



int main ()
{
    int N, i, j;
    int *p, *q;
    int k, l;
    k=0; l=0;
    int max, diaf;
    int c;
    int t1, t2;
    
    scanf ("%i", &N);
    
    int a[N], b[N]; //orizw ton pinaka dunamika?
    
    for (i=0; i<N; i++) { scanf("%i", &c); a[i]=c; }

    mergesort(a);
        
    for (i=0; i<N; i++) { printf("%i", &a[i]);}
        
    i=0; j=0;
    p = &a[0]; q = &a[0];
    while (q != &a[N])
    {
        t1 = *q; t2 = *p;
        while ( ( t2 <= 2*t1 ) && ( q != &a[N] ) ){ i++; q = &a[i]; }
        diaf = i - j - 1;
        if (diaf>=max)
        {
            max=diaf; l=0; 
            for (k=i; k<=N; k++) {b[l] = a[k]; l++; }
        }
        j++; p = &a[j];
    }
    
    printf("%i", max); l=0;
    while ( b[l] != 0 ) { printf("%i", b[l]); l++;}
}
