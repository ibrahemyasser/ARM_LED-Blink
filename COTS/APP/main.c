#include "../HAL/LED/Inc/Led.h"
#include "../MCAL/SYSTICK/Inc/Systick.h"


extern uint32_t 		ON_TIME;
extern uint8_t 			On_Off_Ctr;
extern uint32_t			OFF_TIME;
uint8_t state = 1 ;
void LedControl(void);

int main()
{
	Led_Init();
	Systick_Init();
	Interrupt_Init();
	while(On_Off_Ctr);
	Systick_StartTimer(ON_TIME,LedControl);
	while(1)
	{
		
	}
	
}
void LedControl(void)
{
	if(state)
	{
		Led_On();
		Systick_StartTimer(ON_TIME,LedControl);
		state = 0;
	}else
	{
		Led_Off();
		Systick_StartTimer(OFF_TIME,LedControl);
		state = 1;
	}

}




