/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlindhajdari <arlindhajdari@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 23:32:06 by arlind.hajd       #+#    #+#             */
/*   Updated: 2025/07/26 14:58:32 by arlindhajda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ABBBA
B   B
CBBBC

*/

/*
(1,1)(1,2)(1,3)(1,4)
(2,1)(2,2)(2,3)(2,4)
(3,1)(3,2)(2,3)(3,4)
*/

#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void rush02(int x, int y)
{
    int col;
    col=1;

    int row;

    if(x<1 || y<1)
    {
        return;
    }

    else{
        while (col<=y)
        {
            row=1;
            while(row<=x)
            {
            if((row==1 && col==1) || (row ==1 && col == y))
                {
                    ft_putchar('A');

                }

            else if ((row==x && col==1) || (row ==x && col == y))
            {
                ft_putchar('C');
            }
            else if((col==1 || col==y) || (row==1 || row==x))
            {
                ft_putchar('B');
            }
            else
            {
                ft_putchar(' ');
            }
            row++;
            }
            ft_putchar('\n');
            col++;
        }
    }
}
int main(void)
{
    rush02(1, 1);
    write(1, "\n", 1);

    rush02(5, 1);
    write(1, "\n", 1);

    rush02(1, 5);
    write(1, "\n", 1);

    rush02(2, 2);
    write(1, "\n", 1);

    rush02(3, 3);
    write(1, "\n", 1);

    rush02(4, 4);
    write(1, "\n", 1);

    rush02(5, 2);
    write(1, "\n", 1);

    rush02(2, 5);
    write(1, "\n", 1);

    rush02(0, 0);
    write(1, "\n", 1);

    rush02(-3, 5);
    write(1, "\n", 1);

    rush02(5, -1);
    write(1, "\n", 1);

    rush02(20, 10);
    write(1, "\n", 1);

    return (0);
}

