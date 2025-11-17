/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danylokondysiuk <danylokondysiuk@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 20:05:59 by dkondysi          #+#    #+#             */
/*   Updated: 2025/11/17 19:02:41 by danylokondy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function tests for any printing character, including space.
If the character is printible it return 1, otherwise 0 */

int isprint(int dan)
{
    if(dan >= 32 && dan <= 126)
	{
		return(1);
	} 
	return(0);
}
