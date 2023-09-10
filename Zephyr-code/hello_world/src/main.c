#include <zephyr/zephyr.h>

void main(void)
{
    while(true)
    {
        printk("Hello World! %s\n", CONFIG_BOARD);
        k_msleep(1000);
    }
}
