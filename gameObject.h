#pragma once

namespace Tmpl8
{

class GameObject
{

  public:
	void Init();
	void Shutdown();
	void Update( float deltatime );
	void HandleInput();
};

}; // namespace Tmpl8