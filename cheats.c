void	__Space_Shooter__(void)
{
}

void	Score_Hack(void)
{
	offset = 0x08000000;
	WRITEU32(offset + 0x0125D80, 0x3B9AC9FF);
	offset = 0;
	data = 0;
}

void	__(void)
{
}

void	__Color_Switch__(void)
{
}

void	Score_Hack(void)
{
	offset = 0x08000000;
	WRITEU32(offset + 0x012EF90, 0x00000063);
	offset = 0;
	data = 0;
}

void	__(void)
