#include "../includes/texture.hpp"

//class oluşturulurken texture path'i girilmeli
texture::texture(const char* path)
{
	data =stbi_load(path,&(tinfo.width),&(tinfo.height),&(tinfo.nrChannels),0);
	glGenTextures(1,&id);
	glBindTexture(GL_TEXTURE_2D,id);
	glTexImage2D(GL_TEXTURE_2D,0,GL_RGB,tinfo.width,tinfo.height,0,GL_RGB,GL_UNSIGNED_BYTE,data);
	glGenerateMipmap(GL_TEXTURE_2D);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	stbi_image_free(data);
}

//Loop'daykenkullanılıcak
int	texture::bind()
{
	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D,id);
}

//loop öncesi texture set etmek için kullanılacak
void texture::vertexAttrib(unsigned int VBOLEN,unsigned int baslangic)
{
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, VBOLEN, (void*)baslangic);
	glEnableVertexAttribArray(1);
}
