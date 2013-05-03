#include <stdio.h>
#include <stdlib.h> 

typedef struct paikths 
{
        int upsos;
        int fulh;
        struct paikths *next;
} xwra;


int creat (xwra *l, int a, int b)
{
    xwra *temp, *p;
    if ( l == NULL ) { l = (xwra *) malloc (sizeof (xwra) ); l->fulh = a; l->upsos = b; }
    else 
    {
         temp = l; 
         while (temp->next != NULL) {temp = temp->next;}
         p = (xwra *) malloc (sizeof (xwra) ); 
         p->fulh = a; 
         p->upsos = b; 
         temp->next = p;
    }       
    return 0;
}




int main ( void )
{
     bool flag=true;
     xwra *list, *p, *q;
     int N, K, i, diaf;
     int f, u, x, min;
     int a[1000];
     
     //files 
     
     
     scanf("%i  %i", &N, &K);
     for (i=0; i<N; i++)
     { 
         scanf("%i %i", &f, &u);
         creat(list, f, u);  //ftiaksw thn creat 
     }
     
     // taksinomhsh(list);  //ftiaksw taksinomhsh ths perierghs listas mou     
    
     p=list; q=list;
     while (q != NULL /*and flag=false*/)
     {
           flag = 
           x = q->fulh;
           a[x]++;
           while ( (i<K) and (flag=true) ) { if (a[i]=0) flag=false; } 
           while ( flag )
           {
                 diaf =(p->upsos) - (q->upsos);
                 if ( diaf < min ) min=diaf;
                 a[p->fulh]--;
                 p = p->next;
                 if ( p=q ) flag=false;
           }
     }
          /* i=0;
           while (i<N and flag=true) do if a[i]=0 then flag= false;
           while () */
}
