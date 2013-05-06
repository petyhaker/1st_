#include <stdio.h>


void merge (int v[], int start, int middle, int end) 
{ 
    int v1_n, v2_n, v1_index, v2_index, i; 
    v1_n = middle - start; 
    v2_n = end - middle; 
    int v1[v1_n];  int v2[v2_n]; 

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
                       {   v[start + i] = v1[v1_index++]; }
                                 for (; v2_index < v2_n; i++) 
                                      {  v[start + i] = v2[v2_index++]; }
 } 


void merge_sort (int v[], int start, int end) 
{ 
  int middle; /* the middle of the subarray */ 
  if (start == end) return; 
  if (start == end - 1) return; 
  middle = (start + end) / 2; 
  merge_sort (v, start, middle); 
  merge_sort (v, middle, end); 
  merge (v, start, middle, end); 
}

int main ()
{
    int i, k, l;
    int N, temp, count =0;
    int max=0;
    int c;
    
    scanf("%i", &N);
    
    int a[N], b[N];

    
    for (i=0; i<N; i++) { scanf("%i", &a[i]); }
    
    merge_sort(a, 0, N);
    //for (i=0; i<N; i++) { printf("%i", a[i]); }
    
    k=0; l=0;
    while (l<N) 
    {
          while ( a[l] <= (2*a[k]) ) { l++; }
          if ( (l-k) >= max ) 
          {
               max = l-k; 
               temp = l;
               for (i=0; i<N; i++) {b[i] = 0;}
               i=0;
               while (temp < N) {b[i] = a[temp]; temp++; i++;}
          }
          k++;
    }
    
    i=0;
    while ( (b[i] != 0) && i<N ) {count++; i++;}
    printf("%i %i \n", max, count);
    scanf("%i", c);
    return 0;

}
