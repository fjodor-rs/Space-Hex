#include "precomp.h"

GameObject::GameObject()
{
	
}

void GameObject::Init()
{

}

void GameObject::Shutdown()
{
	next->prev = prev->next;
	prev->next = next->prev;
}

void GameObject::Update(float deltatime)
{


	if ( next != NULL )
		next->Update( deltatime );
}

void GameObject::HandleInput()
{

	if ( next != NULL )
		next->HandleInput();
}