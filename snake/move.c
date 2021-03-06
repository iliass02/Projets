/*
** move.c for  in /home/debian/Snake/marcho_i
** 
** Made by MARCHOUD Iliass
** Login   <marcho_i@etna-alternance.net>
** 
** Started on  Sat Apr 11 14:41:50 2015 MARCHOUD Iliass
** Last update Sun Apr 12 14:00:07 2015 MARCHOUD Iliass
*/

#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include "const.h"


void move_snake (SDL_Rect snakePosition, SDL_Rect bonusPosition, SDL_Surface *fenetre, SDL_Surface *snake, SDL_Surface *bonus)
{ 
  while (1)
    {
      SDL_Event event;
      SDL_PollEvent(&event);
      if (event.type == SDL_QUIT)
	break;     
      if (event.type == SDL_KEYDOWN)
	{
	  while (event.key.keysym.sym==SDLK_RIGHT && snakePosition.x < 460)
	    {
	      snakePosition.x++;
	      SDL_FillRect(fenetre,NULL,SDL_MapRGB(fenetre->format, 160, 0, 0));
	      SDL_FillRect(bonus, NULL, SDL_MapRGB(fenetre->format, 0, 255, 0));
	      SDL_BlitSurface(snake,NULL,fenetre,&snakePosition);
	      SDL_BlitSurface(bonus, NULL, fenetre, &bonusPosition);
	      SDL_Flip(fenetre);
	      SDL_PollEvent(&event);
	      SDL_Delay(3);
	      if (snakePosition.x == bonusPosition.x)
		{
		  bonusPosition.x = rand()%((460/snake->w));
		  bonusPosition.y = rand()%((460/snake->h));
		}
	    }
	  while (event.key.keysym.sym==SDLK_LEFT && snakePosition.x > 0)
	    {    
	      snakePosition.x--;
	      SDL_FillRect(fenetre,NULL,SDL_MapRGB(fenetre->format,160,0,0));
	      SDL_FillRect(bonus, NULL, SDL_MapRGB(fenetre->format, 0, 255, 0));
	      SDL_BlitSurface(snake,NULL,fenetre,&snakePosition);
	      SDL_BlitSurface(bonus, NULL, fenetre, &bonusPosition);
	      SDL_Flip(fenetre);
	      SDL_PollEvent(&event);
	      SDL_Delay(3);
	      if (snakePosition.x == bonusPosition.x)
		{
		  bonusPosition.x = rand()%((460/snake->w));
		  bonusPosition.y = rand()%((460/snake->h));
		}
	    }
	  while (event.key.keysym.sym==SDLK_UP && snakePosition.y > 0)
	    {    
	      snakePosition.y--;
	      SDL_FillRect(fenetre,NULL,SDL_MapRGB(fenetre->format,160,0,0));
	      SDL_FillRect(bonus, NULL, SDL_MapRGB(fenetre->format, 0, 255, 0));
	      SDL_BlitSurface(snake,NULL,fenetre,&snakePosition);
	      SDL_BlitSurface(bonus, NULL, fenetre, &bonusPosition);
	      SDL_Flip(fenetre);
	      SDL_PollEvent(&event);
	      SDL_Delay(3);
	      if (snakePosition.x == bonusPosition.x)
		{
		  bonusPosition.x = rand()%((460/snake->w));
		  bonusPosition.y = rand()%((460/snake->h));
		}
	    }
	  while (event.key.keysym.sym==SDLK_DOWN && snakePosition.y < 460)
	    {    
	      snakePosition.y++;
	      SDL_FillRect(fenetre,NULL,SDL_MapRGB(fenetre->format,160,0,0));
	      SDL_FillRect(bonus, NULL, SDL_MapRGB(fenetre->format, 0, 255, 0));
	      SDL_BlitSurface(snake,NULL,fenetre,&snakePosition);
	      SDL_BlitSurface(bonus, NULL, fenetre, &bonusPosition);
	      SDL_Flip(fenetre);
	      SDL_PollEvent(&event);
	      SDL_Delay(3);
	      if (snakePosition.x == bonusPosition.x)
		{
		  bonusPosition.x = rand()%((460/snake->w));
		  bonusPosition.y = rand()%((460/snake->h));
		}
	    }
	  while (event.key.keysym.sym==SDLK_ESCAPE)
	    break;
	}
      if (snakePosition.x == 460 || snakePosition.x == 0)
	break;
      else if (snakePosition.y == 460 || snakePosition.y == 0)
	break;

    }
}
