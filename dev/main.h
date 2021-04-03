#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "object/riff_object.h"
//#include "banks\bank2.h"
//#include "banks\bank3.h"
#include "fxsample.h"

#ifdef _CONSOLE
	#include "..\tmp\SMSlib.h"
	#include "..\tmp\PSGlib.h"
#else
	#include "..\lib\SMSlib.h"
	#include "..\lib\PSGlib.h"
#endif