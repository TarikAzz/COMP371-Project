#pragma once

#include "Renderable.h"


class Fish : public Renderable
{

public:
	
	Fish(glm::vec3 position);

	void render(glm::mat4 view, glm::mat4 projection);
	void animate(float deltaTime);

	static std::vector<glm::vec3> vertices;
	static std::vector<GLuint> indices;

private:

	// Position and orientation	
	glm::vec3 position;
	glm::vec3 front;
	glm::vec3 up;
	glm::vec3 right;

	// Euler angles
	GLfloat yaw;
	GLfloat pitch;

	// Swim speed
	GLfloat velocity;


	// Variables for periodic animations
	GLfloat totalTime;
	GLfloat yawOsc;
	GLfloat yawDir;

	// Pseudorandom variables
	GLfloat initYaw;
	glm::vec3 scale;
	GLfloat oscOffset;
	GLfloat oscRate;

	void updateVectors();
};