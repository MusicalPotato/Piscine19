/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 00:36:25 by gorban            #+#    #+#             */
/*   Updated: 2019/07/07 11:56:45 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	char *str2;

	str2 = str;
	while (*str2)
	{
		if (*str2 < '0' || *str2 > '9')
			return (0);
		str2++;
	}
	return (1);
}
