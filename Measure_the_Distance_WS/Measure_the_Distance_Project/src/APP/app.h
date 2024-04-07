/*******************************************************************************
* [File Name]:   app.h
*
* [Description]: Header file for Declaration and configuration the  system to
* 				 measure the distance using Ultrasonic sensor Functionality.
*
* [Author]:      Mohamed Saeed
*
********************************************************************************/

#ifndef SRC_APP_APP_H_
#define SRC_APP_APP_H_

/*------------------------------------------------------------------------------
 *                                 INCLUDES
 *------------------------------------------------------------------------------*/

#include "../EHAL/LCD/lcd.h"
#include "../EHAL/ULTRASONIC/ultrasonic.h"

/*------------------------------------------------------------------------------
 *                             Functions Declaration
 *------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------------
 [Function Name]: applicationInit
 [Description]:	This function is responsible to Initialize the Application
 [Args]:   void
 [Return]: Void
 ---------------------------------------------------------------------------------------*/
void applicationInit(void);

/*--------------------------------------------------------------------------------------
 [Function Name]: applicationStart
 [Description]:	This function is responsible to Start the Application
 [Args]:   void
 [Return]: Void
 ---------------------------------------------------------------------------------------*/
void applicationStart(void);

#endif /* SRC_APP_APP_H_ */
