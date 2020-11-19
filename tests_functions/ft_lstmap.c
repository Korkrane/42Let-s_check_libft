#include <stdio.h>
#include "../../libft.h"
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	(*del)(lst->content);
	free(lst);
	lst->content = NULL;
}

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

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *tmp;

	tmp = *alst;
	if (*alst == NULL)
	{
		*alst = new;
		return ;
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}


void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = tmp;
	}
}

int main()
{
	return 0;
}
