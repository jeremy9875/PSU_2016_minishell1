/*
** mysh.c for mysh in /home/jeremy.elkaim/PSU_2016_minishell1
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Jan  9 08:29:07 2017 jeremy elkaim
** Last update Mon Jan 30 08:53:57 2017 jeremy elkaim
*/
#include <unistd.h>
#include <stdlib.h>
#include "gnl.h"

void	dispatch2(char *av)
{
  if (av[0] == 's' && av[1] == 'e' && av[2] == 't'
      && av[3] == 'e' && av[4] == 'n' && av[5] == 'v')
    {
      my_putstr("setenv\n");
    }
  else if (av[0] == 'e' && av[1] == 'n' && av[2] == 'v')
    {
      my_putstr("env\n");
    }
  else if (av[0] == 'e' && av[1] == 'x' && av[2] == 'i' && av[3] == 't')
    {
      my_putstr("exit\n");
      exit (1);
    }
}

int	dispatch(char *av)
{
  if (av[0] == 'c' && av[1] == 'd')
    {
      cd_function(av);
    }
  else if (av[0] == 'l' && av[1] == 's')
    {
      fork();
      execve("/usr/bin/ls", "ls", "ls");
    }
  else if (av[0] == 'u' && av[1] == 'n' && av[2] == 's' && av[3] == 'e'
	   && av[4] == 't' && av[5] == 'e' && av[6] == 'n' && av[7] == 'v')
    {
      my_putstr("unsetenv\n");
    }
  dispatch2(av);
  return (0);
}

int	prompt()
{
  char	buffer[1000];
  int	i;

  i = 1;
  while (i == 1)
    {
      getcwd(buffer ,1001);
      my_putstr2(buffer);
      i = i + 1;
    }
  return (0);
}

int	main(int ac, char **av, char **env)
{
  char	*s;
  
  prompt();
  while (s = get_next_line(0))
    {
      dispatch(s);
      prompt();
    }
  return (0);
}
