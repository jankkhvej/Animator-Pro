#include "ftextf.h"
#include "pjbasics.h"
#include "commonst.h"

Boolean qreq_number(short *inum,short min,short max,char *hailing,...)
{
Boolean ret;
va_list args;
char *formats;

	va_start(args,hailing);
	formats = ftext_format_type(&hailing,&args);
	ret = varg_qreq_number(inum,min,max,NULL,NULL,formats,hailing,args);
	va_end(args);
	return(ret);
}
