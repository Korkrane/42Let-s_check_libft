#include <stdio.h>
#include "../../libft.h"
void	ft_lstclear(t_list **lst, void (*del)(void *));

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	(*del)(lst->content);
	free(lst);
	lst->content = NULL;
}

int main()
{
	return 0;
}
