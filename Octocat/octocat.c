#include <stdio.h>
#include <stdlib.h>

char    *readLine();
void	autocomplete(char *map);
void	hardcore(char *map);
void	casu(char *map);
void	a(char *map, char);
void	d(char *map, char);
void	w(char *map, char);
void	s(char *map, char);
void	rules();

int	i;
int	j;
void	mode()
{
  j = 0;
  i = 0;
char	map[] =
  "8  ######################\n"
  "#    #           ##  ####\n"
  "# ## # ######### ## #####\n"
  "# ## # ######### ## #####\n"
  "# #### #      ## ## #   #\n"
  "#       ########      # >\n"
  "#########################\n";

    while(map[i] != 56)
      i++;
  my_putstr("- 1 : MODE CASU\n- 2 : MODE HARDCORE\n- 3 : MODE AUTOCOMPLETE\n");
  char	*answer;
  answer = readLine();
  system ("clear");
  if (my_strncmp("1\n", answer, 1) == 0 && !answer[1])
    casu(map);
  else if  (my_strncmp("2\n", answer, 1) == 0 && !answer[1])
    hardcore(map);
  else if  (my_strncmp("3\n", answer, 1) == 0 && !answer[1])
    autocomplete(map);
  else
    mode();
}

int	z;
char	user;

void	casu(char *map)
  {
    int	g;
    int	c;
    i = j = c = g=0;
    user = 'p';
    g = 0;
    my_putstr(map);
    while (user != 'q' && g <= j)
      {
	user = getchar();
	while ((c = getchar()) != '\n')
	  g++;
	if (g >= 1)
	  {
	    my_putstr("TRICHE! Vous ne pouvez entrer que un coup!\n");
	    mode();
	  }
	a(map, user);
	d(map, user);
	w(map, user);
	s(map, user);
	system("clear");
	my_putstr(map);
	j++;
      }
  }

void	autocomplete(char *map)
  {
    int	g;
    int	c;
    i = j = c = g=0;
    user = 'p';
    g = 0;
    my_putstr(map);
    while (user != 'q' && g <= j)
      {
	user = getchar();
	while ((c = getchar()) != '\n')
	  g++;
       	if (g >= 1)
	  {
	    my_putstr("TRICHE! Vous ne pouvez entrer que un coup!\n");
	    mode();
	  }
	auto_a(map, user);
	auto_d(map, user);
	auto_w(map, user);
	auto_s(map, user);
	system("clear");
	my_putstr(map);
	j++;
      }
  }

void	hardcore(char *map)
  {
    int	g;
    int c;
    int y;
    int z;
    int v;
    v=0;
    g=0;
    my_putstr(map);
    user = 'l';
    while ( user != 'q')
      {
	user = getchar();
	a(map, user);
	d(map, user);
	w(map, user);
	s(map, user);
	system("clear");
	my_putstr(map);
      }
  }

int	main(int i)
{
  rules();
  mode();  
  return 0;
}
