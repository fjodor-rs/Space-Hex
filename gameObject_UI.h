#pragma once

namespace Tmpl8
{

class UIObject : public GameObject
{
  public:
	virtual void Init();
	virtual void Shutdown();
	virtual void Update( float deltatime );
	void draw();
};

}; // namespace Tmpl8