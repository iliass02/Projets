/*
** autocomplet.c for  in /home/marchoud/etna/projet/Octocat/marcho_i
** 
** Made by MARCHOUD Iliass
** Login   <marcho_i@etna-alternance.net>
** 
** Started on  Fri Nov 14 18:10:36 2014 MARCHOUD Iliass
** Last update Fri Nov 14 18:12:25 2014 MARCHOUD Iliass
*/

#include <stdio.h>
#include <stdlib.h>

char    *readLine();

int	i;
int	j;

void	mode();

void	auto_a(char *map, char user)
{
  if (user == 'a')
    {
      if (map[i-1] != '\0' && map[i-1] != '#')
	{
	  if (map[i-1] == '>')
	    {
	      my_putstr ("You WON!!\n");
	      mode();
	    }
	  map[i] = 35;
	  i--;
	  map[i] = 56;
	}
      else
	{
	  my_putstr("Ce jeu n'est pas un casse brique!\n");
	  mode();	      
	}
    }
}

void	auto_d(char *map, char user)
{
  if (user == 'd')
    {
      if (map[i+1] != '\0' && map[i+1] != '#')
	{
	  if (map[i+1] == '>')
	    {
	      my_putstr ("You WON!!\n");
	      mode();
	    }
	  map[i] = 35;
	  i++;
	  map[i] = 56;
	}
      else
	{
	  my_putstr("Ce jeu n'est pas un casse brique!\n");
	  mode();	      
	}
    }
}
void	auto_w(char *map, char user)
{
  if (user == 'w')
    {
      if (map[i-26] != '\0' && map[i-26] != '#')
	{
	  if (map[i-26] == '>')
	    {
	      my_putstr ("You WON!!\n");
	      mode();
	    }
	  map[i] = 35;
	  i = i-26;
	  map[i] = 56;
	}
      else
	{     
	  my_putstr("Ce jeu n'est pas un casse brique!\n");
	  mode();	      
	}
    }
}

void	auto_s(char *map, char user)
{
  if (user == 's')
    {
      if (map[i+26] != '\0' && map[i+26] != '#')
	{
	  if (map[i+26] == '>')
	    {
	      my_putstr ("You WON!!\n");
	      mode();
	    }
	  map[i] = 35;
	  i = i+26;
	  map[i] = 56;
	}
      else
	{
	  my_putstr("Ce jeu n'est pas un casse brique!\n");
	  mode();	      
	}
    }
} 
