#ifndef TEXTURE_H
#define TEXTURE_H

#include "Resource.h"

#include <GL/glew.h>
#include <glm/glm.hpp>

#include <vector>


class Texture : public Resource
{
public:
	Texture() {}
	Texture(std::string path);
	glm::vec2 getSize();
	GLuint getId();

private:


	GLuint id;
	glm::vec2 size;

	Texture(int width, int height);
};
#endif