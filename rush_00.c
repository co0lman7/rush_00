/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlind.hajdari <arlind.hajdari@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 22:10:44 by arlind.hajd       #+#    #+#             */
/*   Updated: 2025/07/25 23:29:57 by arlind.hajd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    o---o   (1,1)(1,2)(1,3)(1,4)
    |   |   (2,1)(2,2)(2,3)(2,4)
    o---o   (3,1)(3,2)(2,3)(3,4)
*/
#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void rush00(int x, int y)
{
    int l;
    l=1;
    int w;
    if(x<1 || y<1)
    {
        return;
    }
    else{
        while (l<=y)
        {
            w=1;
            while(w<=x)
            {
            if((w==1 && l==1)||(w==x && l==y)||(w==1 && l==y)||(w==x && l==1))
                {
                    ft_putchar('o');
                }
            else if(l==1 || l==y)
            {
                ft_putchar('-');
            }
            else if (w==1 || w==x)
                ft_putchar('|');
            else
            {
                ft_putchar(' '); // Inside
            }
            w++;
            }
            ft_putchar('\n');
            l++;
        }
    }
}
int main()
{
    rush00(5,3);
    write(1, "\n", 1);
    rush00(5,1);
    write(1, "\n", 1);
    rush00(1,1);
    write(1, "\n", 1);
    rush00(1,5);
    write(1, "\n", 1);
}