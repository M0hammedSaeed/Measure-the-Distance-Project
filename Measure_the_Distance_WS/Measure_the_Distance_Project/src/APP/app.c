/*******************************************************************************
* [File Name]:   app.c
*
* [Description]: Source file for implementing the system to measure the distance
* 				 using ultrasonic sensor Functionality.
*
* [Author]:      Mohamed Saeed
*
********************************************************************************/

/*------------------------------------------------------------------------------
 *                                 INCLUDES
 *------------------------------------------------------------------------------*/

#include "app.h"

#include "../MCAL/G_INTERRUPT/g_interrupt.h"
#include "../utils/std_types.h"

/*******************************************************************************
 *                         Implementation FUNCTIONS
 *******************************************************************************/

/*--------------------------------------------------------------------------------------
 [Function Name]: applicationInit
 [Description]:	This function is responsible to Initialize the Application
 [Args]:   void
 [Return]: Void
 ---------------------------------------------------------------------------------------*/
void applicationInit(void)
{
	/* Enable Global Interrupt I-Bit */
	GI_Enable();

	/* Initialize the LCD driver */
	LCD_init();

	/* Initialize the Ultrasonic driver */
	Ultrasonic_init();

	/* Display this string "Distance =    cm" only once on LCD at the first row*/
	LCD_moveCursor(0, 0);
	LCD_displayString("Distance =    cm");

}

/*--------------------------------------------------------------------------------------
 [Function Name]: applicationStart
 [Description]:	This function is responsible to Start the Application
 [Args]:   void
 [Return]: Void
 ---------------------------------------------------------------------------------------*/
void applicationStart(void)
{
	uint16 distance = 0;

	/* continuously reading the distance measured by the ultra-sonic */
	distance = Ultrasonic_readDistance();

	LCD_moveCursor(0, 11);
	/* Represent the distance on LCD */
	if(distance >= 100)
	{
		LCD_intgerToString(distance);
	}
	else
	{
		LCD_intgerToString(distance);
		/* In case the distance is two, or one number
		 * Print a space after the value to overwrite the previous digit in this location if existed
		 */
		LCD_displayCharacter(' ');
	}

}
