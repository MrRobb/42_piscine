
#include <stdio.h>
#include "ex00/ft_list.h"
t_list	*ft_create_elem(void *data);
void	ft_list_push_back(t_list **begin_list, void *data);
void	ft_list_push_front(t_list **begin_list, void *data);
int		ft_list_size(t_list *begin_list);
t_list	*ft_list_last(t_list *begin_list);
t_list	*ft_list_push_params(int ac, char **av);
void	ft_list_clear(t_list **begin_list);
void	ft_list_reverse(t_list **begin_list);


void	ft_print_list(t_list **begin)
{
	t_list *i = (*begin);
	while(i != NULL)
	{
		int *a = (*i).data;
		printf("%d\n", *a);
		i = (*i).next;
	}
}

void	ft_print_list_strings(t_list *begin)
{
	t_list *i = begin;
	while(i != NULL)
	{
		char *a = (*i).data;
		printf("%s\n", a);
		i = (*i).next;
	}
}

int main(int argc, char *argv[]){
	// EX00
	printf("EX00\n");
	int a00 = 10;
	t_list *l0 = ft_create_elem(&a00);
	printf("%p\n", (*l0).data);

	// EX01
	printf("\nEX01\n");
	int a01 = 10;
	int b01 = 5;
	int c01 = 7;
	int d01 = 13;
	t_list *l1 = ft_create_elem(&a01);
	//t_list *l1 = NULL;
	ft_list_push_back(&l1, &b01);
	ft_list_push_back(&l1, &c01);
	ft_list_push_back(&l1, &d01);
	printf("Size: %d\n", ft_list_size(l1));
	ft_print_list(&l1);

	// EX02
	printf("\nEX02\n");
	int a02 = 10;
	int b02 = 5;
	int c02 = 7;
	int d02 = 13;
	t_list *l2 = ft_create_elem(&a02);
	// t_list *l2 = NULL;
	ft_list_push_front(&l2, &b02);
	ft_list_push_front(&l2, &c02);
	ft_list_push_front(&l2, &d02);
	printf("Size: %d\n", ft_list_size(l2));
	ft_print_list(&l2);

	// EX04
	printf("\nEX04\n");
	t_list *node104 = ft_list_last(l1);
	printf("Last node of L1\n");
	ft_print_list(&node104);
	t_list *node204 = ft_list_last(l2);
	printf("Last node of L2\n");
	ft_print_list(&node204);

	// EX05
	printf("\nEX05\n");
	t_list *l05 = ft_list_push_params(argc, argv);
	ft_print_list_strings(l05);

	// EX06
	printf("\nEX06\n");
	int a06 = 10;
	int b06 = 5;
	int c06 = 7;
	int d06 = 13;
	t_list *l6 = ft_create_elem(&a06);
	ft_list_push_back(&l6, &b06);
	ft_list_push_back(&l6, &c06);
	ft_list_push_back(&l6, &d06);
	// t_list *l6 = NULL;
	ft_list_clear(&l6);
	ft_print_list(&l6);

	// EX08
	printf("\nEX08\n");
	int a08 = 10;
	int b08 = 5;
	int c08 = 7;
	int d08 = 13;
	t_list *l8 = ft_create_elem(&a08);
	ft_list_push_back(&l8, &b08);
	ft_list_push_back(&l8, &c08);
	ft_list_push_back(&l8, &d08);
	// t_list *l8 = NULL;
	ft_list_reverse(&l8);
	ft_print_list(&l8);


}
