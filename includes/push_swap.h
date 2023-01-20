
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* Headers */

# include "../libft/libft.h"
# include "../printf/ft_printf.h"
# include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Typedefs */

typedef struct s_ps	t_ps;

/* Principal struct */

typedef struct		s_point
{
	long int		num;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_point;

//stuct for my liked list conttainig adress previus struct and next struct(that store a number and	)
typedef struct		s_frame
{
	struct s_stack	*a;
	struct s_stack	*b;

	char			**argv;
	char			*line;
	char			*str;

	int				print_stacks;
	int				do_write;
	int				stack_len;
	long			quarter;
	long			median;
	long			three_quarters;

	long			biggest;
	int				big_rotate;
	int				big_rrotate;
	int				big_flag;

	long			smallest;
	int				small_rotate;
	int				small_rrotate;
	int				small_flag;

	int				after_rotate;
}					t_frame;

/* Functions */
t_frame		*create_frame(t_frame *frame, char **argv);

#endif