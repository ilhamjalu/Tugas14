#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include <GLEW/include/glew.h>
#include <GLFW/glfw3.h>

#include <GLM/include/glm.hpp>
#include <GLM/include/vec2.hpp>
#include <GLM/include/vec3.hpp>
#include <GLM/include/vec4.hpp>
#include <GLM/include/mat4x4.hpp>
#include <GLM/include/gtc/matrix_transform.hpp>
#include <GLM/include/gtc/type_ptr.hpp>

#include <SOIL2/include/SOIL2.h>

using namespace std;

struct Vertex {
	glm::vec3 position;
	glm::vec3 color;
	glm::vec2 texcoord;
	glm::vec3 normal;
};