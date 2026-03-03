#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int ft_list_size(t_list *begin_list)
{
    int i = 0;
    while (begin_list)
    {
        begin_list = begin_list->next;
        i++;
    }
    return (i);
}

// int main()
// {
//     t_list *a = NULL;
   

//     printf("list size: %d", ft_list_size(a));
// }
int main(void)
{
    t_list a;
    t_list b;
    t_list c;

    a.data = "A";
    a.next = &b;

    b.data = "B";
    b.next = &c;

    c.data = "C";
    c.next = NULL;

    printf("List size = %d\n", ft_list_size(&a));

    return 0;
}