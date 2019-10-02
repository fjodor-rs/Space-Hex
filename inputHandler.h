#pragma once
namespace Tmpl8
{
static class InputHandler
{
  public:
	vec2 MousePos();
	bool MouseLeftDown();
	bool MouseLeftUp();
	bool MouseRightDown();
	bool MouseRightUp();
};
} // namespace Tmpl8