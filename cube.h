/* OBJ2H program, copyright Jeff Chastine */
/* Original file: cube.obj */
/* Version 1.0*/


#ifndef CUBE_H
#define CUBE_H

const int num_indices = 74;
const int num_vertices = 16;


GLfloat vertices[] = {
//rink
	 0.00f,  0.00f, -2.0f,  //0      
	 2.00f,  0.00f, -2.0f,  //1       
	 0.00f,  1.00f, -2.0f,  //2     Top Left	0,1
	 2.00f,  1.00f, -2.0f,  //3     Top Right	1,1
	 0.00f,  0.00f,  2.0f,  //4     
	 2.00f,  0.00f,  2.0f,  //5       
	 0.00f,  1.00f,  2.0f,  //6     Bot Left	0,0
	 2.00f,  1.00f,  2.0f,  //7     Bot Right	1,0
};

GLfloat colors[] = {
//rink	
	1.0f, 1.0f, 1.0f, 
	1.0f, 1.0f, 1.0f, 
	1.0f, 1.0f, 1.0f,
	1.0f, 1.0f, 1.0f,
	1.0f, 1.0f, 1.0f,
	1.0f, 1.0f, 1.0f,
	1.0f, 1.0f, 1.0f,
	1.0f, 1.0f, 1.0f,
};

GLuint indices[] = {
//rink
	0,	6,	4,
	0,	2,	6,
	0,	3,	2,
	0,	1,	3,
	2,	7,	6,
	2,	3,	7,
	4,	6,	7,
	4,	7,	5,
	0,	4,	5,
	0,	5,	1,
	1,	5,	7,
	1,	7, 	3,

};

GLfloat textures[] = {
	//rink
	
	0.0,0.0,//0
	1.0,0.0,//1
	0.0,1.0,//2
	1.0,1.0,//3
	0.0,1.0,//4
	1.0,1.0,//5
	0.0,0.0,//6
	1.0,0.0,//7

};





#endif //cube_H
