#include <jlfw/entity.h>

Entity::Entity() {
	std::cout << "Hello, I'm an Entity" << std::endl;

	this->_sprite = NULL;

	position = glm::vec2(0.0f, 0.0f);
	scale = glm::vec2(1.0f, 1.0f);
	rotation = 0.0f;
}

Entity::~Entity() {
	std::cout << "Goodbye, I was an Entity" << std::endl;
}

void Entity::addSprite(Sprite* spr) {
	this->_sprite = spr;
}

