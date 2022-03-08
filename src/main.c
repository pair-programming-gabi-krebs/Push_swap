/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 01:04:07 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/03/08 02:38:20 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	print_stack(int argc, t_data *data)
{
	for (int i = 0; i < argc - 1; i++)
		printf("%d  %d\n", data->stack_a[i], data->stack_b[i]);
	printf("_  _\n");
	printf("a  b\n");
}

int	main(int argc, char *argv[])
{
	t_data	data;

	if (!check(argc, argv) || !init(&data, argc, argv))
		return (EXIT_FAILURE);
	print_stack(argc, &data);
	return (set_sort(&data, argc, argv));
}
