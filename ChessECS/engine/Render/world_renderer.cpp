#include "world_renderer.h"

WorldRenderer::WorldRenderer() {
	vector<uint> indices = { 0,1,2,0,2,3 };
	vector<glm::vec2> corners = { glm::vec2(-1, -1), glm::vec2(1,-1), glm::vec2(1,1), glm::vec2(-1,1) };
	spriteVao = VertexArrayObject(indices, corners);
}

Texture2D* WorldRenderer::add_texture(Texture2D* texture) {
	if (texture)
		textures.emplace_back(texture);
	return texture;
}

Texture2D* WorldRenderer::get_texture(const std::string& name) {
	for (Texture2D* texture : textures)
		if (texture->get_name() == name)
			return texture;
	return nullptr;
}

glm::vec2 WorldRenderer::screen_to_world(int x, int y) const {
	glm::vec3 screenPos(x * 2 - resolution.x, resolution.y - y * 2, 1);
	return screenToWorld * screenPos;
}