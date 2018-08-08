/*
** write.c for write in /home/jeremy.elkaim/PSU_2016_minishell1/source
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Thu Jan 19 16:11:31 2017 jeremy elkaim
** Last update Mon Jan 30 09:06:55 2017 jeremy elkaim
*/
#include <unistd.h>

void	my_putchar(char c)
{
  write (1, &c, 1);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}

int	my_putstr2(char *str)
{
  int	i;
  int	o;
  int	p;
  int	y;

  o = 0;
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '/')
        {
          o = o + 1;
        }
      i = i + 1;
    }
  p = 0;
  i = 0;
  y = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '/')
        {
          p = p + 1;
        }
      if (p == o || p == o - 1)
        {
          my_putchar(str[i+1]);
        }
      i = i + 1;
    }
  my_putchar('>');
  return (0);
}
