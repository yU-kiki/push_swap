#include <stdio.h>

typedef struct s_list
{
	int				data;
	struct s_list	*next;
	struct s_list	*prev;
}	t_list;

void	printList(t_list *p)
{
	while (p != NULL)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}

int	main(void)
{
	t_list	p0, p1, p2, p3, p4, p5;
	t_list	*top;

	p0.data = 2;
	p0.next = &p1;
	p1.data = 3;
	p1.next = &p2;
	p2.data = 5;
	p2.next = &p3;
	p3.data = 1;
	p3.next = &p4;
	p4.data = 4;
	p4.next = NULL;
	top = &p0;
	printList(top);
	printf("p0(2)とp1(3)の間に要素「６」を追加\n");
	p5.data = 6;
	p5.next = &p1;
	p0.next = &p5;
	printList(top);
	printf("p3のデータを削除\n");
	p2.next = p2.next->next;
	printList(top);
	return (0);
}
