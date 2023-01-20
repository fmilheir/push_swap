#include "./includes/push_swap.h"

void	do_rra(t_frame *frame)
{
	if (frame->a)
		frame->a = frame->a->prev;
	if (frame->do_write)
		write(1, "rra\n", 4);
}


void	do_rrb(t_frame *frame)
{
	if (frame->b)
		frame->b = frame->b->prev;
	if (frame->do_write)
		write(1, "rrb\n", 4);
}


void	do_rrr(t_frame *frame)
{
	do_rra(frame);
	do_rrb(frame);
	if (frame->do_write)
		write(1, "rrr\n", 4);
}