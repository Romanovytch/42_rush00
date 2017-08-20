/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 09:23:46 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/06 15:11:53 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define CHAR_LINE '|'
#define CHAR_WIDE '-'
#define CHAR_TOPLEFT 'o'
#define CHAR_TOPRIGHT 'o'
#define CHAR_BOTLEFT 'o'
#define CHAR_BOTRIGHT 'o'

int		ft_putchar(char c);

void	print_corners(int j, int y, char top, char bot)
{
	if (j == 0)
		ft_putchar(top);
	else if (j == y - 1)
		ft_putchar(bot);
	else
		ft_putchar(CHAR_LINE);
}

void	rush(int x, int y)
{
	int i;
	int j;

	j = 0;
	while (j < y)
	{
		i = 0;
		print_corners(j, y, CHAR_TOPLEFT, CHAR_BOTLEFT);
		while (i < (x - 2))
		{
			if (j == 0 || j == (y - 1))
				ft_putchar(CHAR_WIDE);
			else
				ft_putchar(' ');
			i = i + 1;
		}
		if (x > 1)
			print_corners(j, y, CHAR_TOPRIGHT, CHAR_BOTRIGHT);
		ft_putchar('\n');
		j = j + 1;
	}
}
