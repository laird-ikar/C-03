/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:25:53 by bguyot            #+#    #+#             */
/*   Updated: 2021/11/18 10:03:56 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d_size;
	unsigned int	s_size;

	d_size = 0;
	while (dest[d_size])
		d_size++;
	s_size = 0;
	while (src[s_size])
		s_size++;
	i = 0;
	while (i + d_size + 1 < size && src[i])
	{
		dest[d_size + i] = src[i];
		i++;
	}
	dest[d_size + i] = '\0';
	if (size > d_size)
		return (d_size + s_size);
	return (size + s_size);
}
