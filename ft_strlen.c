/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassin <ayassin@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:52:57 by ayassin           #+#    #+#             */
/*   Updated: 2021/12/26 19:35:28 by ayassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Return int length of string "s1"
**NOT PROTECTED VS NULL INPUT**/
int	ft_strlen(const char *s)
{
	int	len;

	len = -1;
	while (s[++len])
		;
	return (len);
}
