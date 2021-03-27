/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minskim2 <minskim2@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 20:40:01 by minskim2          #+#    #+#             */
/*   Updated: 2021/03/27 21:37:45 by minskim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	stamp(char *buf, int x, int j)
{
	if (j == 0)
	{
		ft_putchar(buf[0]);
		if (x == 1)
			ft_putchar('\n');
	}
	else	if (j == x - 1)
	{
		ft_putchar(buf[1]);
		ft_putchar(buf[2]);
	}
	else
		ft_putchar(buf[3]);
}

void	rop(int x, int y, int i, int j)
{
	char buf[4];

	if (i == 0 || i == y - 1)
	{
		buf[0] = 'A';
		buf[1] = 'C';
		buf[2] = '\n';
		buf[3] = 'B';
		stamp(buf, x, j);
	}
	else
	{
		buf[0] = 'B';
		buf[1] = 'B';
		buf[2] = '\n';
		buf[3] = ' ';
		stamp(buf, x, j);
	}
}

void	print(int x, int y)
{
	char i;
	char j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			rop(x, y, i, j);
			j++;
		}
		i++;
	}
}

void	rush(int x, int y)
{
	print(x, y);
}
