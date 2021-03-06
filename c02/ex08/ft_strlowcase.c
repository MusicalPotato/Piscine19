/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 08:36:37 by gorban            #+#    #+#             */
/*   Updated: 2019/07/08 17:18:55 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char *str2;

	str2 = str;
	while (*str2)
	{
		if (*str2 >= 'A' && *str2 <= 'Z')
			*str2 = (*str2 + 32);
		str2++;
	}
	return (str);
}
