#pragma once

namespace Tmpl8
{

class GameStateManager
{
  private:
	  
  public:
	void Init();
	void Shutdown();
	void Update( float deltatime );
	void Draw();
	void HandleInput();
};

}; // namespace Tmpl8