#version 130

// This is the same old fragment shader we've been using

in vec4 color;
out vec4 fColor;

void main () {
	//fColor = color;
	//fColor = vec4 (1.0,0.0,0.0,1.0);
	fColor.r=color.r;
	fColor.g=color.g;
	fColor.b=color.b;
	fColor.a=1.0;
}
