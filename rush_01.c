/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlindhajdari <arlindhajdari@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 23:32:06 by arlind.hajd       #+#    #+#             */
/*   Updated: 2025/07/26 22:00:58 by arlindhajda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/***\
*   *
\***/

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
void rush01(int x, int y)
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
            if((row==1 && col==1) || (row==x && col==y) && (!(row ==1 && col == y) && (!(row ==x && col == 1)))) //issue fixed by adding the last condition check, needs to be checked with norminette
                {
                    ft_putchar('/');
                }
            else if ((row==1 && col==y)|| (row==x && col==1))
            {
                ft_putchar('\\');
            }
            else if((col==1 || col==y) || (row==1 || row==x))
            {
                ft_putchar('*');
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


int main()
{
    rush01(10,15);
    write(1, "\n", 1);
    rush01(5,1);
    write(1, "\n", 1);
    rush01(1,2);
    write(1, "\n", 1);
    rush01(1,5);
    write(1, "\n", 1);
    rush01(4,4);
    write(1, "\n", 1);
}
