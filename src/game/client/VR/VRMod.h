#include "cbase.h"
#include <stdint.h>
#include <imaterialsystem.h>



// Globals
int VRMod_Started = 0;
ITexture * RenderTarget_VRMod = NULL;
ITexture * RenderTarget_VRMod_GUI = NULL;
float g_horizontalFOVLeft = 0;
float g_horizontalFOVRight = 0;
float g_aspectRatioLeft = 0;
float g_aspectRatioRight = 0;








// Functions we want to share with other files (mainly viewrender.cpp for now)

void VRMOD_SubmitSharedTexture();

void VRMOD_UpdatePosesAndActions();

void VRMOD_UtilSetOrigin(Vector pos);

void VRMOD_UtilHandleTracking();

void VRMOD_Process_input();

QAngle VRMOD_GetViewAngle();

Vector VRMOD_GetViewOriginLeft();

Vector VRMOD_GetViewOriginRight();

int VRMOD_GetRecWidth();

int VRMOD_GetRecHeight();

Vector VRMOD_GetRecommendedViewmodelAbsPos();

QAngle VRMOD_GetRecommendedViewmodelAbsAngle();

QAngle VRMOD_GetRightControllerAbsAngle();

Vector VRMOD_GetRightControllerAbsPos();

void VRMOD_SetSpawnPlayerHMDAngles();

Vector VRMOD_GetPlayerForward();

Vector VRMOD_GetPlayerRight();

Vector VRMOD_GetPlayerUp();

void RenderHUDQuad(bool bBlackout, bool bTranslucent);
