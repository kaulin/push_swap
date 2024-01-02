/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajuntti <jajuntti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:41:06 by jajuntti          #+#    #+#             */
/*   Updated: 2024/01/02 13:45:27 by jajuntti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_arr_len(char **arr)
{
	int	len;

	len = 0;
	while(arr[len])
		len++;
	return (len);
}

int	main(int argc, char *argv[])
{
	if (argc < 2)
		return (0);
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		argc = get_arr_len(argv);
	}
	else
	{
		argv = &argv[1];
		argc = argc -1;
	}
	if (!push_swap(argc, argv))
		return (write(2, "Error!\n", 7));
	return (0);
}