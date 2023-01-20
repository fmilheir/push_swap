#include "./includes/push_swap.h"

void	do_sa(t_frame *frame)
{
	long int	tmp;

	if (frame->a && frame->a->next != frame->a)
	{
		tmp = frame->a->num;
		frame->a->num = frame->a->next->num;
		frame->a->next->num = tmp;
	}
	if (frame->do_write)
		write(1, "sa\n", 3);
}

void	do_sb(t_frame *frame)
{
	long int	tmp;

	if (frame->b && frame->b->next != frame->b)
	{
		tmp = frame->b->num;
		frame->b->num = frame->b->next->num;
		frame->b->next->num = tmp;
	}
	if (frame->do_write)
		write(1, "sb\n", 3);
}

void	do_ss(t_frame *frame)
{
	do_sa(frame);
	do_sb(frame);
	if (frame->do_write)
		write(1, "ss\n", 3);
}