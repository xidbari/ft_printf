/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosman <aosman@42wolfsburg.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 14:45:03 by aosman            #+#    #+#             */
/*   Updated: 2025/06/15 21:13:23 by aosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main() {

  	// Calling function sum() with different number
  	// of arguments
    int r = ft_printf("first :%f, second :%c\n", 3.2, 'Y');
	printf("first :%f, second :%c\n", 3.2, 'Y');
	
    return (r);
}
