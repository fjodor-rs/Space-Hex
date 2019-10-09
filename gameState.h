#pragma once

namespace Tmpl8
{
class GameState
{
  private:
  public:
	virtual void Init();
	virtual void Shutdown();
	virtual void Update( float deltatime );
	virtual void Draw();
	virtual void HandleInput();
};
}; // namespace Tmpl8