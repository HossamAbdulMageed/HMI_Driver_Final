#include "HMI_Manager_Callbacks.h"

HMI_Callback_ChkType Flag_to_check_callbacks;


void HMI_GetVersion_done(HMI_Callback_ChkType retVar)
{

    Flag_to_check_callbacks = retVar;
    while(1)
    {

    }
}

void HMI_SelectPicture_done(HMI_Callback_ChkType retVar)
{

    Flag_to_check_callbacks = retVar;

}

void HMI_GetPictureID_done(HMI_Callback_ChkType retVar)
{
    Flag_to_check_callbacks = retVar;
    while(1)
    {

    }
}


void HMI_SetDataVariable_done(HMI_Callback_ChkType retVar)
{
    Flag_to_check_callbacks = retVar;

}


void HMI_SetText_done(HMI_Callback_ChkType retVar)
{

    Flag_to_check_callbacks = retVar;

}

