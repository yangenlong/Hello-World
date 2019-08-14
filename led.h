#ifndef __LED_H 
#define __LED_H   
#include "sys.h" 
//LED 端口定义 
#define LED0 PAout(5) 
// PA5
#define LED1 PEout(5)
// PE5   
void LED_Init(void);
//初始化  

#endif 