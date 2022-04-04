#define STB_IMAGE_IMPLEMENTATION
#include<stb/stb_image.h>
#include<glad/glad.h>
#include<glm/vec3.hpp>
#include<glm/glm.hpp>
#include<GLFW/glfw3.h>
#include<iostream>

class texture{
public:
	texture(const char* path);
	int bind();
	void vertexAttrib(unsigned int VBOLEN,unsigned int baslangic);

private:
	int id;
	unsigned int id;
	unsigned char* data;
	typedef struct s_texture{
		int width;
		int height;
		int nrChannels;
	}	t_texture;
	t_texture tinfo;
	typedef struct s_texture_data{
		glm::vec3 pos;
		glm::vec2 tex;
	}	t_texture_data;
};
