/*
This file is automatically generated
DO NOT MODIFY BY HAND
Usr_LivingroomLightPage
Header
*/

#ifndef Usr_LivingroomLightPage__H
#define Usr_LivingroomLightPage__H

#include "Esd_Base.h"
#include "Esd_Core.h"
#include "Esd_FontInfo.h"
#include "Ft_Esd.h"
#include "Ft_Esd_BitmapInfo.h"
#include "Ft_Esd_Circle.h"
#include "Ft_Esd_Gradient.h"
#include "Ft_Esd_Image.h"
#include "Ft_Esd_ImageButton.h"
#include "Ft_Esd_Label.h"
#include "Ft_Esd_Layout_Fixed.h"
#include "Ft_Esd_Line.h"
#include "Ft_Esd_RangeSlider.h"
#include "Ft_Esd_Rectangle.h"
#include "Ft_Esd_Theme.h"
#include "Ft_Esd_Theme_DarkOrange.h"
#include "Ft_Esd_Widget.h"
#include "livingroom_light_case.h"
#include "power_circle_64.h"
#include "return_circle_64.h"

#ifndef ESD_LOGIC
#define ESD_LOGIC(name, ...)
#define ESD_ACTOR(name, ...)
#define ESD_WIDGET(name, ...)
#define ESD_PAGE(name, ...)
#define ESD_APPLICATION(name, ...)
#define ESD_INPUT(name, ...)
#define ESD_ARRAY_INPUT(name, ...)
#define ESD_OUTPUT(name, ...)
#define ESD_SLOT(name, ...)
#define ESD_SIGNAL(name, ...)
#define ESD_VARIABLE(name, ...)
#define ESD_WRITER(name, ...)
#endif

#define Usr_LivingroomLightPage_CLASSID 0xFAEA1730
ESD_SYMBOL(Usr_LivingroomLightPage_CLASSID, Type = esd_classid_t)

ESD_WIDGET(Usr_LivingroomLightPage, Include = "Usr_LivingroomLightPage.h", Callback, X = 0, Y = 0, Width = 400, Height = 300, Page)
typedef struct
{
	union
	{
		void *Owner;
		Ft_Esd_Widget Widget;
	};
	ESD_VARIABLE(SliderValue_1, Type = int, Default = 255, Private)
	int SliderValue_1;
	ESD_VARIABLE(LampColor, Type = esd_argb32_t, Default = #ffaa00, Private)
	esd_argb32_t LampColor;
	ESD_VARIABLE(On, Type = bool, Default = true, Private)
	bool On;
	ESD_SIGNAL(BackPushed)
	void(* BackPushed)(void *context);
	Ft_Esd_Layout_Fixed Fixed_Position;
	Ft_Esd_Line ESD_Line_Widget_2;
	Ft_Esd_RangeSlider ESD_RangeSlider;
	Ft_Esd_Label ESD_Label;
	Ft_Esd_ImageButton ESD_Image_Button_2;
	Ft_Esd_ImageButton ESD_Image_Button;
	Ft_Esd_Image ESD_Image_2;
	Ft_Esd_Circle ESD_Circle_;
	Ft_Esd_Line ESD_Line_Widget;
	Ft_Esd_Rectangle ESD_Rectangle_Widget_4;
	Ft_Esd_Gradient ESD_Gradient_Widget;
} Usr_LivingroomLightPage;

void Usr_LivingroomLightPage__Initializer(Usr_LivingroomLightPage *context);

ESD_SLOT(Update)
void Usr_LivingroomLightPage_Update(Usr_LivingroomLightPage *context);

ESD_SLOT(End)
void Usr_LivingroomLightPage_End(Usr_LivingroomLightPage *context);

ESD_SLOT(Start)
void Usr_LivingroomLightPage_Start(Usr_LivingroomLightPage *context);

ESD_SLOT(Right)
void Usr_LivingroomLightPage_Right(Usr_LivingroomLightPage *context);

ESD_SLOT(Left)
void Usr_LivingroomLightPage_Left(Usr_LivingroomLightPage *context);

#endif /* Usr_LivingroomLightPage__H */

/* end of file */
