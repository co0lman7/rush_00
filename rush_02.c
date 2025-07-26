/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlind.hajdari <arlind.hajdari@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 23:32:06 by arlind.hajd       #+#    #+#             */
/*   Updated: 2025/07/26 03:23:26 by arlind.hajd      ###   ########.fr       */
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
            if((row==1 && col==1) || (row==x && col==y) && (!(row ==1 && col == y))) 
                {
                    ft_putchar('A');

                }

            else if ((row==1 && col==y)|| (row==x && col==1) || (row ==x && col == y))
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
int main()
{
    rush02(10,15);
    write(1, "\n", 1);
    rush02(5,1);
    write(1, "\n", 1);
    rush02(1,3);
    write(1, "\n", 1);
    rush02(1,5);
    write(1, "\n", 1);
}