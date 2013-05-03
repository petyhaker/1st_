#include <stdio.h>
#include <stdlib.h> 

typedef struct list
{
        int dunamh;
        struct list *next;
} Lista;




int length (Lista *p, Lista *q)
{
    int sum=0;
    Lista *temp;
    temp = p;
    if (temp == q) { sum = 1; }
    else if (temp->next == q) { sum = 1; }
    else { while (temp->next != q) {sum=sum+1; temp=temp->next;} }
    return sum;
}

int add_to_list (Lista *l, int c)
{
     Lista *temp, *p;
     
     temp = l;
     if (temp == NULL) { l = (Lista *) malloc (sizeof (Lista) ); (l->dunamh) = c; l->next = NULL;}
     else 
     {    
          while ( temp->next != NULL ) { temp = temp->next; }
          p = (Lista *) malloc (sizeof (Lista) ); p->next = NULL; p->dunamh=c;
          temp->next = p;
     }
     return 0;
}


/*

struct list *Quicksort(struct list *l)
{
    // Return NULL list
    if ( (l == NULL) or (l->next == NULL) ) return l;

    struct list *less=NULL, *more=NULL, *next, *endl, *temp=l;

    //Select a random pivot point
    struct list *pivot = SelectPivot(list);

    printf("Pivot Value = %lo\n", pivot->value);



    //Divide & Conquer 
    while(temp != NULL)
    {

        next = temp->next;

        if(temp->value < pivot->value)
        {
            temp->next = less;
            less = temp;
        }
        else 
        {
            temp->next = more;
            more = temp;

        }
        temp = next;
    }



    less = Quicksort(less);
    more = Quicksort(more);

    // Merge
    if(ListLength(less)!=0)
    {       
        while(endl != NULL)
        {
            endl = less->next;
            less->next = more;
            more = less;
            less = endl;
        }

        return more;        
    }
    else 
    {


        return more;    
    }

}


*/

int main (void)
{
    Lista *l, *apov, *temp;
    int i, c, N;
    Lista *front, *back;
    int apostash = 0;
    int max = 0;
    
    //files
    
    scanf("%i", &N);
    for (i=0; i<N; i++)
    {
        scanf("%i", &c); 
        add_to_list(l, c);
    }
    
    //taksinomhsh apla syndedemenhs listas!!!!
    
    front = l; back=l;
    // while ( ( (back->dumanh) <= (2*front->dunamh) ) and (back != NULL) ) do back = back->next;
    while (back->next != NULL)
    {
          while ( ( (back->dunamh) <= (2*front->dunamh) ) && (back != NULL) )
          {
           back = back->next; // to back einai   
          }
                                         // sto ena parapanw apo oti prepei. dhladh einai se xwra pou trwei to front!
          apostash = length(front, back);
          if ( apostash >= max )
          { 
               free(apov);
               max=apostash;
               temp = back;
               while (temp != NULL) 
               {
                     add_to_list(apov, temp->dunamh);
                     temp = temp->next;
               }
          }
          front = front->next;
    }
    
}
