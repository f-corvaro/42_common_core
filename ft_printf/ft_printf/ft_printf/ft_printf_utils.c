/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:04:14 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/10/26 18:19:26 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_len(int c)
{
	write (1, &c, 1);
	return (1);
}
/*This function is a putchar that returns an int (the value printed)*/

int	ft_putstr_len(char *str)
{
	if (!str)
	{
		write (1, "(null)", 6);
		return (6);
	}
	write (1, str, ft_strlen(str));
	return (len);
}
/*This function is a putstr that returns an int (the value printed)*/
