/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatthan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:53:55 by npatthan          #+#    #+#             */
/*   Updated: 2021/11/04 13:54:07 by npatthan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	i;

	i = 0;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);
	while (i * i <= (unsigned int)nb)
	{
		if ((unsigned int)nb == i * i)
			return (i);
		i++;
	}
	return (0);
}
