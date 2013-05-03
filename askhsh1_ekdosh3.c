//author vasiliki petychaki

#include <stdio.h>



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

    //taksinomhsh pinaka!!!
    
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