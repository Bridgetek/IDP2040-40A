/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_Panel_Color
Header
*/

#ifndef Ft_Esd_Panel_Color__H
#define Ft_Esd_Panel_Color__H

#include "Esd_Base.h"
#include "Ft_Esd.h"
#include "Ft_Esd_Math.h"
#include "Ft_Esd_Widget.h"

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

#define Ft_Esd_Panel_Color_CLASSID 0x0D4FD9B6
ESD_SYMBOL(Ft_Esd_Panel_Color_CLASSID, Type = esd_classid_t)

ESD_WIDGET(Ft_Esd_Panel_Color, Include = "Ft_Esd_Panel_Color.h", Callback, DisplayName = "ESD Panel Color", Category = EsdBasicWidgets, Icon = ":/icons/ui-panel.png", X = 0, Y = 0, Width = 400, Height = 300)
typedef struct
{
	union
	{
		void *Owner;
		Ft_Esd_Widget Widget;
	};
	ESD_INPUT(Color, Type = ft_argb32_t, Default = #7cadcf32)
	ft_argb32_t(* Color)(void *context);
	/* Corner's radius */
	ESD_INPUT(Radius, Type = int, Default = 4)
	int(* Radius)(void *context);
	ESD_INPUT(Raised, Type = ft_bool_t, Default = false)
	ft_bool_t(* Raised)(void *context);
} Ft_Esd_Panel_Color;

void Ft_Esd_Panel_Color__Initializer(Ft_Esd_Panel_Color *context);

ESD_SLOT(Render)
void Ft_Esd_Panel_Color_Render(Ft_Esd_Panel_Color *context);

#endif /* Ft_Esd_Panel_Color__H */

/* end of file */
