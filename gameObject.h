#pragma once

namespace Tmpl8
{

class GameObject
{

  public:
	virtual void Init();
	virtual void Shutdown();
	virtual void Update( float deltatime );
	virtual void HandleInput();
};

}; // namespace Tmpl8