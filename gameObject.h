#pragma once

namespace Tmpl8
{

class GameObject
{

  public:
	GameObject();
	virtual void Init();
	virtual void Shutdown();
	virtual void Update( float deltatime );
	virtual void HandleInput();
	GameObject *next, *prev;
};

}; // namespace Tmpl8