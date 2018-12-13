#include "globalStuff.h"

#include <glm/vec4.hpp> 
#include <glm/mat4x4.hpp>
#include <glm/gtc/matrix_transform.hpp> 


void PlayerCollisionTest(double deltaTime, GLuint shaderProgramID)
{
	cMeshObject* pPlayer = findObjectByFriendlyName("ship");
	cMeshObject* pDebugSphereShip = findObjectByFriendlyName("DebugSphereShip");

	cMeshObject* pHouse = findObjectByFriendlyName("house");
	cMeshObject* pDebugSphereHouse = findObjectByFriendlyName("DebugSphereHouse");

	pDebugSphereShip->position = pPlayer->position;
	pDebugSphereHouse->position = pHouse->position;
	
	
}