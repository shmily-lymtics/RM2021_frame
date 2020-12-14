#ifndef  __SHOOT_FRICTION_TASK_H
#define  __SHOOT_FRICTION_TASK_H
/* 包含头文件 ---------------------------------------------------------------*/
#include "myinclude.h"
#include "user_lib.h"

/* 本模块向外部提供的宏定义 -------------------------------------------------*/
#define SHOOT_FRIC_PWM_ADD_VALUE    5.0f

/* 本模块向外部提供的结构体/枚举定义 ----------------------------------------*/
typedef struct
{
		ramp_function_source_t fric1_ramp;
		ramp_function_source_t fric2_ramp;
	
} shoot_control_t;	
/* 本模块向外部提供的变量声明 -----------------------------------------------*/

/* 本模块向外部提供的自定义数据类型变量声明 ---------------------------------*/

/* 本模块向外部提供的接口函数原型声明 ---------------------------------------*/




#endif



