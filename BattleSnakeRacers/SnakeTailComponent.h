#pragma once

#include <glm\glm.hpp>

class Entity;

struct SnakeTailComponent {
	Entity* entityToFollow; // The Entity the snake tail is following
	Entity* player; // The player the snake tail belongs to
};