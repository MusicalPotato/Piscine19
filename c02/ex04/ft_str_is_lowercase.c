/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 01:05:12 by gorban            #+#    #+#             */
/*   Updated: 2019/07/07 08:34:38 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	char *str2;

	str2 = str;
	while (*str2)
	{
		if (*str2 < 'a' || *str2 > 'z')
			return (0);
		str2++;
	}
	return (1);
}
