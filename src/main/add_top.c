#include "./includes/push_swap.h"

void		stack_add_top(t_frame *frame, char stack_name, int num)
{
	t_point		**top;
	t_point		*tmp;

	top = (stack_name == 'a') ? &frame->a : &frame->b;
	if (*top)
	{
		if (!(tmp = (t_point *)malloc(sizeof(t_point))))
			push_swap_error(frame);
		tmp->next = *top;
		tmp->prev = (*top)->prev;
		(*top)->prev = tmp;
		tmp->prev->next = tmp;
		tmp->num = num;
		*top = (*top)->prev;
	}
	else
	{
		if (!(*top = (t_point *)malloc(sizeof(t_point))))
			push_swap_error(frame);
		(*top)->next = *top;
		(*top)->prev = *top;
		(*top)->num = num;
	}
}