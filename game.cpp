#include "precomp.h" // include (only) this in every .cpp file

// -----------------------------------------------------------
// Initialize the application
// -----------------------------------------------------------
void Game::Init()
{

}

// -----------------------------------------------------------
// Close down application
// -----------------------------------------------------------
void Game::Shutdown()
{
}

static Sprite rotatingGun( new Surface( "assets/aagun.tga" ), 36 );
static Sprite pizza( new Surface( "assets/basic_hex2.png" ), 1 );
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
	rotatingGun.Draw( screen, 100, 100 );
	rotatingGun.NextFrame();
	pizza.Draw( screen, -20, 0 );
	//printf("%s",InputHandler::MousePos());
	rotatingGun.Draw( screen, 100, 100 );
	//printf("%",InputHandler::MousePos());
	cout << "(" << InputHandler::MousePos().x << ", " << InputHandler::MousePos().y << ")" << endl;
	
}
