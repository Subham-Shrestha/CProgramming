// #include<stdio.h>
// #include<graphics.h>
// int main(){
//     int gd = DETECT, gm;
//     initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
//     int max_x_coordinate = getnmaxx();
//     int max_y_coordinate = getnmaxy();
//     printf("Max x coordinate : %d\n", max_x_coordinate);
//     printf("Max y coordinate : %d\n", max_y_coordinate);
//     line(0, 0, max_x_coordinate, max_y_coordinate);
//     getch();
//     closegraph();
//     return 0;
// }

#include <SDL2/SDL.h>
#include <stdio.h>

int main()
{
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        printf("Error initializing SDL: %s\n", SDL_GetError());
        return 1;
    }

    SDL_Window *window = SDL_CreateWindow("SDL2 Test",
                                        SDL_WINDOWPOS_CENTERED,
                                        SDL_WINDOWPOS_CENTERED,
                                        640, 480, 0);
    if (!window)
    {
        printf("Error creating window: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    SDL_Delay(3000); // Window stays open for 3 seconds
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}