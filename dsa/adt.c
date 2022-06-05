#include <stdio.h>
#include <stdlib.h>
// #include<iostream>

struct adt
{
    /* data */
    int ts, us;
    int *ptr;
};
void setdata(struct adt *a, int t, int u)
{
    a->ts = t;
    a->us = u;
    a->ptr = (int *)malloc(t * sizeof(int));
    for (int i = 0; i < (a->us); i++)
    {
        // (a->ptr)[1]=5;
        scanf("%d", &(a->ptr)[i]);
    }
}
int ins(struct adt *j, int index, int element)
{
    if ((j->us) = (j->ts))
    {
        return -1;
    }

    for (int i = (j->us); i >= index; i--)
    {
        (j->ptr)[i+1] = (j->ptr)[i];
        if (i = index)
        {
            (j->ptr)[index] = element;
            j->us += 1;
        }
    }

    for (int i = 0; i < (j->us); i++)
    {
        // (a->ptr)[1]=5;
        printf("\n element : %d", (j->ptr)[i]);
    }
    return 0;
}

int main()
{
    struct adt marks;
    setdata(&marks, 20, 5);
    ins(&marks, 2, 1200);

    return 0;
}