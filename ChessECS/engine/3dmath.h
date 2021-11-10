#pragma once
#define GLM_FORCE_LEFT_HANDED

#include <cstdlib>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/quaternion.hpp>
#include <glm/gtx/quaternion.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/euler_angles.hpp>
#include <glm/gtx/vector_angle.hpp>

#define real float

constexpr real PI = 3.1415926535897932384626433832795f;
constexpr real PIHALF = PI * 0.5f;
constexpr real PITWO = PI * 2.0f;
constexpr real DegToRad = PI / 180.f;
constexpr real RadToDeg = 1.f / DegToRad;

inline int rand_int(int max_val = RAND_MAX) {
	return glm::abs(std::rand()) % max_val;
}

inline real rand_float(real from = -1.0f, real to = 1.0f) {
	return from + ((real)std::rand() / RAND_MAX) * (to - from);
}

inline glm::vec2 rand_vec2(real from = -1.0f, real to = 1.0f) {
	return glm::vec2(rand_float(from, to), rand_float(from, to));
}

inline glm::vec3 rand_vec3(real from = -1.0f, real to = 1.0f) {
  return glm::vec3(rand_float(from, to), rand_float(from, to), rand_float(from, to));
}

inline glm::vec4 rand_vec4(real from = 0.0f, real to = 1.0f) {
	return glm::vec4(rand_float(from, to), rand_float(from, to), rand_float(from, to), rand_float(from, to));
}
