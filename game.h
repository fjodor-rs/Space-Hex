#pragma once

namespace Tmpl8 {

class Game
{
public:
	void SetTarget( Surface* surface ) { screen = surface; }
	void Init();
	void Shutdown();
	void Tick( float deltaTime );
	InputHandler *Input;
  private:
	Surface* screen;
};

}; // namespace Tmpl8