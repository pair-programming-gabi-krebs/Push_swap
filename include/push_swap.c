/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:23:58 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/02/26 23:48:29 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>

# include "../libft/libft.h"
# include <unistd.h>

# define ERROR 1
# define SUCCESS 0

typedef struct s_data
{
	int	*stack_a;
	int	*stack_b;
	int	qnt_int;
} t_data;


/* ==== rules functions ==== */
void	pa(void);
void	pb(void);
void	ra(void);
void	rb(void);
void	rr(void);
void	sa(void);
void	sb(void);
void	ss(void);
void	rra(void);
void	rrb(void);
void	rrr(void);

int	check(t_data *data, int argc, char *argv[]);

#endif