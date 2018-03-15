#pragma once

#include <iostream>
#include <glm/glm.hpp>
#include <jlfw/sprite.h>

class Entity {
public:
	Entity();
	virtual ~Entity();

	void addSprite(Sprite* spr);
	Sprite* sprite() {return _sprite;};

	glm::vec2 position;
	glm::vec2 scale;
	float rotation;

private:
	Sprite* _sprite;
};