/*
** function.c for function in /home/jeremy.elkaim/PSU_2016_minishell1/source
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Tue Jan 17 14:59:59 2017 jeremy elkaim
** Last update Thu Jan 19 15:53:44 2017 jeremy elkaim
*/
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <stdlib.h>

int	cd_function(char *av)
{
  char	buffer[1000];
  char	*directory = "/";
  int	ret;
  if (av[0] == 'c' && av[1] == 'd' && av[2] == '\0')
    {
      ret = chdir ("/home/");
      if (av[3] == '-' && av[4] == '-')
	{
	  ret = chdir ("..");
	}
      else
	ret = chdir ("~");
    }
  return (0);
}
