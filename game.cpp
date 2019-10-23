#include "precomp.h" // include (only) this in every .cpp file

// -----------------------------------------------------------
// Initialize the application
// -----------------------------------------------------------
Hex *kaas;
Sprite *basicHex;
Hex *hexMap;

Hexmap TheWorld;

void Game::Init()
{
	Input = new InputHandler();
	
	//https://www.redblobgames.com/grids/hexagons/#map-storage
	
	lua_State *L;
	L = luaL_newstate();
	luaopen_base( L );
	luaopen_string( L );
	TheWorld = Hexmap(50,50);
}

// -----------------------------------------------------------
// Close down application
// -----------------------------------------------------------
void Game::Shutdown()
{
}
// -----------------------------------------------------------
// Main application tick function
// -----------------------------------------------------------
void Game::Tick( float deltaTime )
{
	// clear the graphics window
	screen->Clear( 0xff000000 );
	// print something in the graphics window
	screen->Print( "hello world", 2, 2, 0xffffff );
	// draw a sprite
	TheWorld.Draw(screen);
	//printf("%s",InputHandler::MousePos());
	//printf("%",InputHandler::MousePos());
	cout << "(" << InputHandler::MousePos().x << ", " << InputHandler::MousePos().y << ")" << endl;
	screen->Line( InputHandler::MousePos().x, 0, InputHandler::MousePos().x, SCRHEIGHT - 1, 0xff0000 );
	screen->Line( 0, InputHandler::MousePos().y, SCRWIDTH, InputHandler::MousePos().y, 0xff0000 );
}
