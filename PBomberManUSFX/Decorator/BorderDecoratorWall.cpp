#include "BorderDecoratorWall.h"

void BorderDecoratorWall::render(const SDL_Rect& camera)
{
	DecoratorWall::render(camera);
	std::cout << "dentro de BorderDecoratorWall" << std::endl;
}
