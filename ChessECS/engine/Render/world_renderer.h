#pragma once
#include <string>
#include <vector>

#include <glm/glm.hpp>
#include "Texture/texture2d.h"
#include "Shader/shader.h"
#include <../ecs/singleton.h>
#include "vertex_array_object.h"

class WorldRenderer : ecs::Singleton {
public:
	glm::mat3 screenToWorld;
	glm::ivec2 resolution;
	std::vector<Texture2D*> textures;
	Shader spriteShader;
	VertexArrayObject spriteVao;

	WorldRenderer();

	Texture2D* add_texture(Texture2D* texture);
	Texture2D* get_texture(const std::string& name);
	glm::vec2 screen_to_world(int x, int y) const;
};