#include <module.h>

static int __init init_vishnet_device(void)
{
	printk("Vishnet device is initialized\n");

	return 0;
}

void __exit exit_vishnet_device()
{
	printk("Vishnet device is released\n");
	return 0;
}

module_init(init_vishnet_device);
module_exit(exit_vishnet_device);

MODULE_VERSION("1:1.0");
MODULE_DESCRIPTION("Is is a network driver for the specialized traffic flow")
MODULE_AUTHOR("Vishwanath Jadhav")
