/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danylokondysiuk <danylokondysiuk@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 20:05:52 by dkondysi          #+#    #+#             */
/*   Updated: 2025/11/17 18:59:00 by danylokondy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function converts an upper-case letter to the corresponding lower-case letter and return it*/

int	ft_tolower(int dan)
{
	if (dan >= 'A' && dan <= 'Z')
		return (dan + 32);
	return (dan);
}