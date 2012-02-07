int dynalow_foo(void)
{
	return 42;
}

int dynalow_bar(void)
{
	return 69;
}

/* this is necessary for building on some platforms */
int boot_t__dyna_low(void)
{
	return 666;
}
