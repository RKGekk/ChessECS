#pragma once
#include "3dmath.h"

struct Transform2D {
	glm::vec2 position;
	glm::vec2 scale;

	//in radians
	float rotation;

	Transform2D(glm::vec2 position = glm::vec2(0.f), glm::vec2 scale = glm::vec2(1.f), float rotation = 0) : position(position), scale(scale), rotation(rotation) {}

	glm::mat3 get_matrix() const;
};