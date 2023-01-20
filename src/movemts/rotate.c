#include "./includes/push_swap.h"

void	do_ra(t_frame *frame)
{
	if (frame->a)
		frame->a = frame->a->next;
	if (frame->do_write)
		write(1, "ra\n", 3);
}

void	do_rb(t_frame *frame)
{
	if (frame->b)
		frame->b = frame->b->next;
	if (frame->do_write)
		write(1, "rb\n", 3);
}

void	do_rr(t_frame *frame)
{
	do_ra(frame);
	do_rb(frame);
	if (frame->do_write)
		write(1, "rr\n", 3);
}