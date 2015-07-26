
#include <SDL.h>
#include <iostream>
using namespace std;

//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main( int argc, char* args[] )
{
	//The window we'll be rendering to
	SDL_Window* window = NULL;

	//Initialize SDL
	if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
	{
		cout << "SDL could not initialize! SDL_Error: %s"<< SDL_GetError() <<endl;
	}
    cout << "Init Successfull" <<endl;
    //Create window
    window = SDL_CreateWindow( "Practical Fire Explosion", SDL_WINDOWPOS_UNDEFINED,
                              SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
                              SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
    if( window == NULL )
    {
        SDL_Quit();
    }
    bool quiet = false;

    SDL_Event event;

    while(!quiet)
    {
        while(SDL_PollEvent(&event))
        {
            if(event.type == SDL_QUIT)
            {
                quiet = true;
            }
        }
    }
	//Destroy window
	SDL_DestroyWindow( window );

	//Quit SDL subsystems
	SDL_Quit();

	return 0;
}
