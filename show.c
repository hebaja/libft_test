#include "test.h"

void	show(int result)
{
	const char	*error_msg = "Error.";
	const char	*pass_msg = "Ok.";
	if (result)
		printf("%s\n", pass_msg);
	else
		printf("%s\n", error_msg);
}

