#pragma once
#ifndef __TILE__
#define __TILE__
#include <GLM/detail/type_vec4.hpp>

#include "DisplayObject.h"

class Tile : public DisplayObject
{
private:
	glm::vec4 color = { 100.0f, 100.0f, 100.0f, 100.0f };
public:
	// Constructor
	Tile();
	
	// Destructor
	~Tile();
	
	// Life-Cycle Functions
	void draw() override;
	void update() override;
	void clean() override;
};

#endif /* defined (__TILE__) */