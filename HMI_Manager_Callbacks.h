#ifndef HMI_MANAGER_CALLBACKS_H
#define HMI_MANAGER_CALLBACKS_H

#include <stdint.h>
#include "HMI.h"


extern HMI_Callback_ChkType Flag_to_check_callbacks;


void HMI_GetVersion_done(HMI_Callback_ChkType retVar);
void HMI_SelectPicture_done(HMI_Callback_ChkType retVar);
void HMI_GetPictureID_done(HMI_Callback_ChkType retVar);
void HMI_SetDataVariable_done(HMI_Callback_ChkType retVar);
void HMI_SetText_done(HMI_Callback_ChkType retVar);





#endif
