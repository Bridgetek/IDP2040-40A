/*
This file is automatically generated
LampTop
C Source
*/

#include "LampTop.h"

#include "Ft_Gpu.h"
#include "LampTop_progmem.h"

Ft_Esd_BitmapInfo LampTop__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 15, /* Padded to 16, REPEAT will not work as expected */
	.Height = 14,
	.Format = L4,
	.Stride = 8,
	.Size = 112,
	.ProgMem = LampTop_bin,
	.StorageSize = ((78 + 3) >> 2),
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Type = ESD_RESOURCE_PROGMEM,
};

Ft_Esd_BitmapCell LampTop(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &LampTop__Info, 
		.Cell = cell 
	};
}


/* end of file */
