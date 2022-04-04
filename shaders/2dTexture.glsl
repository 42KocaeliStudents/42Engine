#version 330 core
out vec4 fragColor;
in vec2 texCoord;

uniform vec4 uColor;
uniform sampler2D ourTexture;
void main()
{
	fragColor = texture(ourTexture,texCoord);
}
