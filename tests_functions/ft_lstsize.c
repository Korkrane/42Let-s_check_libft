#include <stdio.h>
#include "../../libft.h"
int		ft_lstsize(t_list *lst);

t_list	*ft_lstnew(void *content)
{
	t_list *new_list;

	new_list = malloc(sizeof(t_list) * 1);
	if (!new_list)
		return (NULL);
	if (new_list)
	{
		new_list->content = content;
		new_list->next = NULL;
	}
	return (new_list);
}

int main()
{
	t_list *liste;
	t_list *elem1;
	t_list *elem2;
	t_list *elem3;
	t_list *elem4;
	t_list *elem5;
	t_list *elem6;
	t_list *elem7;
	t_list *elem8;
	t_list *elem9;

	liste = ft_lstnew("Test 1");
	elem1 = ft_lstnew("Bonjour");
	elem2 = ft_lstnew("tu");
	elem3 = ft_lstnew("Veux");
	elem4 = ft_lstnew("bien");
	elem5 = ft_lstnew("norminet");
	elem6 = ft_lstnew("bahaas-testing");
	elem7 = ft_lstnew("42");
	elem8 = ft_lstnew("hello world");
	elem9 = ft_lstnew("end");
	liste->next = elem1;
	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;
	elem4->next = elem5;
	elem5->next = elem6;
	elem6->next = elem7;
	elem7->next = elem8;
	elem8->next = elem9;
	elem9->next = NULL;
	while(liste)
	{
		printf("List size :%d\n", ft_lstsize(liste));
		liste = liste->next;
	}
	return 0;
}
