/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fabs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lherbelo <lherbelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 15:14:42 by lherbelo          #+#    #+#             */
/*   Updated: 2016/10/26 15:17:21 by lherbelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double		ft_fabs(double c)
{
	if (c > 0)
		return (c);
	else if (c < 0)
		return (-c);
	return (0);
}