/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 09:08:55 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/20 11:36:00 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	rush(int x, int y);

int		main(int argc, char **argv)
{
	if (argc == 3)
		rush(atoi(argv[1]), atoi(argv[2]));
	return (0);
}
