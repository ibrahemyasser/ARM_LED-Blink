/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  IntCtr_Cfg.h
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>
 *
 *********************************************************************************************************************/
#ifndef INTCTRL_CFG_H_
#define INTCTRL_CFG_H_

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "../LIBRARIES/common/Std_Types.h"
#include "../MCAL/INTERRUPT/Inc/IntCtrl_Types.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/




/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

typedef struct 
{
	IRQn_Type InterruptPeripheralGate;
	uint8_t InterruptGrouping;
	uint8_t InterruptGroupPriority;
	uint8_t InterruotSubgroubPriority;
}IntCtr_Config;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#endif  /* FILE_NAME_H */

/**********************************************************************************************************************
 *  END OF FILE: Std_Types.h
 *********************************************************************************************************************/