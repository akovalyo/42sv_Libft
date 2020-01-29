/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_memalloc.c                          _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/27 11:34:49 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/27 11:34:49 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "../libft.h"

int	test_ft_memalloc()
{
	void *test;
	
		
	printf("Check ft_memalloc\n\nTest 1 (allocation failure): ");
	if (ft_memalloc(22000000000) != NULL)
		ERROR
	else
		OK

	printf("\n");
	

	
	
	return (0);
}
