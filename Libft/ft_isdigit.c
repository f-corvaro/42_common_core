/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:43:26 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/02/17 19:55:54 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int p)
{
	if (p >= 48 && p <= 57)
		return (1);
	return (0);
}

/*return 1 if p is a number or 0 if it doesn't*/