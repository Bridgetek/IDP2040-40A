/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_Sketch
C Source
*/

/*
Comment :
Introduction:
This widget draws a sketch.
CMD_SKETCH is used internally.
Touch input is supported.

*/

#include "Ft_Esd_Sketch.h"

#include "Esd_Context.h"
#include "Ft_Esd_CoCmd.h"
#include "Ft_Esd_Dl.h"

ESD_CORE_EXPORT void Esd_Noop(void *context);


static Ft_Esd_WidgetSlots s_Ft_Esd_Sketch__Slots = {
	(void(*)(void *))Ft_Esd_Widget_Initialize,
	(void(*)(void *))Ft_Esd_Sketch_Start,
	(void(*)(void *))Ft_Esd_Widget_Enable,
	(void(*)(void *))Ft_Esd_Sketch_Update,
	(void(*)(void *))Ft_Esd_Sketch_Render,
	(void(*)(void *))Ft_Esd_Widget_Idle,
	(void(*)(void *))Ft_Esd_Sketch_Disable,
	(void(*)(void *))Ft_Esd_Sketch_End,
};

static void Ft_Esd_Sketch_Touch_Tag_Up__Signal(void *context);
static void Ft_Esd_Sketch_Touch_Tag_Tap__Signal(void *context);

void Ft_Esd_Sketch__Touch_Tag__Initializer(Ft_Esd_Sketch *context)
{
	Ft_Esd_TouchTag *object = (Ft_Esd_TouchTag *)&context->Touch_Tag;
	Ft_Esd_TouchTag__Initializer(object);
	object->Owner = (void *)context;
	object->Up = Ft_Esd_Sketch_Touch_Tag_Up__Signal;
	object->Tap = Ft_Esd_Sketch_Touch_Tag_Tap__Signal;
}

void Ft_Esd_Sketch__Initializer(Ft_Esd_Sketch *context)
{
	Ft_Esd_Widget__Initializer((Ft_Esd_Widget *)context);
	context->Widget.ClassId = Ft_Esd_Sketch_CLASSID;
	context->Widget.Slots = &s_Ft_Esd_Sketch__Slots;
	context->Widget.LocalX = 50;
	context->Widget.LocalY = 50;
	context->Widget.LocalWidth = 200;
	context->Widget.LocalHeight = 150;
	context->BitmapCell = (Ft_Esd_BitmapCell){ 0 };
	context->Changed = Esd_Noop;
	context->BitmapInfo = (Ft_Esd_BitmapInfo){ 0 };
	context->PenColor = 0xff000000UL;
	context->Watch_Variables_2__0 = 0;
	context->Watch_Variables_2__1 = 0;
	context->Watch_Variables_2__2 = 0;
	context->Watch_Variables_2__3 = 0;
	context->Watch_Variables__0 = 0;
	context->Watch_Variables__1 = 0;
	context->MinWidth = 0;
	context->MinHeight = 0;
	Ft_Esd_Sketch__Touch_Tag__Initializer(context);
}

void Ft_Esd_Sketch_Alloc_Bitmap(Ft_Esd_Sketch *context);
void Ft_Esd_Sketch_Render_Bitmap(Ft_Esd_Sketch *context);
void Ft_Esd_Sketch_Resize_Bitmap(Ft_Esd_Sketch *context);
ft_uint32_t Ft_Esd_Sketch_Get_Addr(Ft_Esd_Sketch *context);
void Ft_Esd_Sketch_CoCmd_Sketch(Ft_Esd_Sketch *context);
void Ft_Esd_Sketch_Clear_Bitmap(Ft_Esd_Sketch *context);
void Ft_Esd_Sketch_CoCmd_Stop(Ft_Esd_Sketch *context);

void Ft_Esd_Sketch_Start(Ft_Esd_Sketch *context)
{
	void *owner = context->Owner;
	Ft_Esd_Widget_Start((Ft_Esd_Widget *)context);
	Ft_Esd_TouchTag_Start(&context->Touch_Tag);
}

void Ft_Esd_Sketch_Update(Ft_Esd_Sketch *context)
{
	void *owner = context->Owner;
	Ft_Esd_TouchTag_Update(&context->Touch_Tag);
	Ft_Esd_Widget_Update((Ft_Esd_Widget *)context);
}

void Ft_Esd_Sketch_End(Ft_Esd_Sketch *context)
{
	void *owner = context->Owner;
	Ft_Esd_TouchTag_End(&context->Touch_Tag);
	Ft_Esd_Widget_End((Ft_Esd_Widget *)context);
}

void Ft_Esd_Sketch_Render(Ft_Esd_Sketch *context)
{
	void *owner = context->Owner;
	ft_int16_t watched__0 = context->Widget.GlobalWidth;
	ft_int16_t watched__1 = context->Widget.GlobalHeight;
	if (context->Watch_Variables__0 != watched__0
		|| context->Watch_Variables__1 != watched__1)
	{
		context->Watch_Variables__0 = watched__0;
		context->Watch_Variables__1 = watched__1;
		Ft_Esd_Sketch_Resize_Bitmap(context);
	}
	Ft_Esd_Sketch_Alloc_Bitmap(context);
	ft_uint32_t watched_1__0 = Ft_Esd_Sketch_Get_Addr(context);
	ft_bool_t watched_1__1 = Ft_Esd_TouchTag_Touching(&context->Touch_Tag);
	ft_int16_t watched_1__2 = context->Widget.GlobalX;
	ft_int16_t watched_1__3 = context->Widget.GlobalY;
	if (context->Watch_Variables_2__0 != watched_1__0
		|| context->Watch_Variables_2__1 != watched_1__1
		|| context->Watch_Variables_2__2 != watched_1__2
		|| context->Watch_Variables_2__3 != watched_1__3)
	{
		context->Watch_Variables_2__0 = watched_1__0;
		context->Watch_Variables_2__1 = watched_1__1;
		context->Watch_Variables_2__2 = watched_1__2;
		context->Watch_Variables_2__3 = watched_1__3;
		ft_bool_t if_1 = Ft_Esd_TouchTag_Touching(&context->Touch_Tag);
		if (if_1)
		{
			Ft_Esd_Sketch_CoCmd_Sketch(context);
		}
		else
		{
			Ft_Esd_Sketch_CoCmd_Stop(context);
		}
	}
	ft_uint8_t s = Ft_Esd_TouchTag_Tag(&context->Touch_Tag);
	Ft_Esd_Dl_TAG(s);
	Ft_Esd_Sketch_Render_Bitmap(context);
	ft_uint8_t s_1 = 255;
	Ft_Esd_Dl_TAG(s_1);
	Ft_Esd_Widget_Render((Ft_Esd_Widget *)context); 
}

void Ft_Esd_Sketch_Clear(Ft_Esd_Sketch *context)
{
	void *owner = context->Owner;
	Ft_Esd_Sketch_Clear_Bitmap(context);
}

void Ft_Esd_Sketch_Disable(Ft_Esd_Sketch *context)
{
	void *owner = context->Owner;
	Ft_Esd_Widget * owner_1 = (Ft_Esd_Widget *)context;
	Ft_Esd_CoCmd_Stop(owner_1);
	Ft_Esd_Widget_Disable((Ft_Esd_Widget *)context); 
}

void Ft_Esd_Sketch_Touch_Tag_Up__Signal(void *c)
{
	Ft_Esd_Sketch *context = (Ft_Esd_Sketch *)c;
	void *owner = context->Owner;
	context->Changed(owner);
}

void Ft_Esd_Sketch_Touch_Tag_Tap__Signal(void *c)
{
	Ft_Esd_Sketch *context = (Ft_Esd_Sketch *)c;
	void *owner = context->Owner;
	context->Changed(owner);
}


/* end of file */
