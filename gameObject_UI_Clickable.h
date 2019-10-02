#pragma once

namespace Tmpl8
{

class UIObjectClickable : GameObject
{
  public:
	virtual void Init();
	virtual void Shutdown();
	virtual void Update( float deltatime );
	virtual void HandleInput();
	void draw();
};

}; // namespace Tmpl8